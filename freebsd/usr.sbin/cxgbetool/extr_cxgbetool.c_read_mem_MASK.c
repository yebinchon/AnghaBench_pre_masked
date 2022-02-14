
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct t4_mem_range {void* len; scalar_t__ data; void* addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct t4_mem_range*) ;
 int VAR_1 ;
 int FUNC_1 (void**) ;
 scalar_t__ FUNC_2 (void*) ;
 void FUNC_3 (void**,void*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(uint32_t VAR_2, uint32_t VAR_3, void (*VAR_4)(uint32_t *, uint32_t))
{
 int VAR_5;
 struct t4_mem_range VAR_6;

 VAR_6.addr = VAR_2;
 VAR_6.len = VAR_3;
 VAR_6.data = FUNC_2(VAR_6.len);

 if (VAR_6.data == 0) {
  FUNC_4("read_mem: malloc");
  return (VAR_1);
 }

 VAR_5 = FUNC_0(VAR_0, &VAR_6);
 if (VAR_5 != 0)
  goto done;

 if (VAR_4)
  (*VAR_4)(VAR_6.data, VAR_6.len);
done:
 FUNC_1(VAR_6.data);
 return (VAR_5);
}
