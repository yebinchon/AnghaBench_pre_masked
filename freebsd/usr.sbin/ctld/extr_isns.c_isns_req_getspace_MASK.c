
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct isns_req {int ir_usedlen; int ir_buflen; void* ir_buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (void*,int) ;

__attribute__((used)) static int
FUNC_3(struct isns_req *VAR_0, uint32_t VAR_1)
{
 void *VAR_2;
 int VAR_3;

 if (VAR_0->ir_usedlen + VAR_1 <= VAR_0->ir_buflen)
  return (0);
 VAR_3 = 1 << FUNC_0(VAR_0->ir_usedlen + VAR_1);
 VAR_2 = FUNC_2(VAR_0->ir_buf, VAR_3);
 if (VAR_2 == ((void*)0)) {
  FUNC_1(1, "realloc");
  return (1);
 }
 VAR_0->ir_buf = VAR_2;
 VAR_0->ir_buflen = VAR_3;
 return (0);
}
