
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ver ;
typedef void* u16 ;
struct ldc_version {void* minor; void* major; } ;
struct ldc_packet {int dummy; } ;
struct ldc_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ldc_packet* FUNC_0 (struct ldc_channel*,int ,int ,struct ldc_version*,int,unsigned long*) ;
 int FUNC_1 (int ,char*,void*,void*) ;
 int FUNC_2 (struct ldc_channel*,struct ldc_packet*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ldc_channel *VAR_4,
        u16 VAR_5, u16 VAR_6)
{
 struct ldc_packet *VAR_7;
 struct ldc_version VAR_8;
 unsigned long VAR_9;

 VAR_8.major = VAR_5;
 VAR_8.minor = VAR_6;

 VAR_7 = FUNC_0(VAR_4, VAR_2, VAR_3,
       &VAR_8, sizeof(VAR_8), &VAR_9);
 if (VAR_7) {
  FUNC_1(VAR_1, "SEND VER NACK maj[%u] min[%u]\n",
         VAR_8.major, VAR_8.minor);

  return FUNC_2(VAR_4, VAR_7, VAR_9);
 }
 return -VAR_0;
}
