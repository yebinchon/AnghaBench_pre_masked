
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_version {scalar_t__ major; scalar_t__ minor; } ;
struct ldc_packet {int dummy; } ;
struct ldc_channel {int dummy; } ;


 int FUNC_0 (struct ldc_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ldc_version* FUNC_1 (scalar_t__) ;
 struct ldc_packet* FUNC_2 (struct ldc_channel*,int ,int ,struct ldc_version*,int,unsigned long*) ;
 int FUNC_3 (struct ldc_channel*,struct ldc_packet*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ldc_channel *VAR_2, struct ldc_version *VAR_3)
{
 struct ldc_version *VAR_4;
 struct ldc_packet *VAR_5;
 unsigned long VAR_6;

 if (VAR_3->major == 0 && VAR_3->minor == 0)
  return FUNC_0(VAR_2);

 VAR_4 = FUNC_1(VAR_3->major);
 if (!VAR_4)
  return FUNC_0(VAR_2);

 VAR_5 = FUNC_2(VAR_2, VAR_0, VAR_1,
        VAR_4, sizeof(*VAR_4),
        &VAR_6);
 if (!VAR_5)
  return FUNC_0(VAR_2);

 return FUNC_3(VAR_2, VAR_5, VAR_6);
}
