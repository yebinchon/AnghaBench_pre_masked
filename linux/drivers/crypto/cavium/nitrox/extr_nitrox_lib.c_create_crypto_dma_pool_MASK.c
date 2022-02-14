
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_device {int ctx_pool; } ;
struct ctx_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nitrox_device*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,size_t,int,int ) ;

__attribute__((used)) static int FUNC_2(struct nitrox_device *VAR_2)
{
 size_t VAR_3;


 VAR_3 = VAR_0 + sizeof(struct ctx_hdr);
 VAR_2->ctx_pool = FUNC_1("nitrox-context",
      FUNC_0(VAR_2), VAR_3, 16, 0);
 if (!VAR_2->ctx_pool)
  return -VAR_1;

 return 0;
}
