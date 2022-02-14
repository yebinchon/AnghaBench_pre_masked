
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ch_mem_range {unsigned int addr; unsigned int len; scalar_t__ buf; int mem_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int,unsigned int) ;
 scalar_t__ FUNC_1 (char const*,int ,struct ch_mem_range*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char*,unsigned int*) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static int
FUNC_6(int VAR_3, char *VAR_4[], int VAR_5, const char *VAR_6)
{
 uint64_t *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 struct ch_mem_range VAR_10;

 if (VAR_3 != VAR_5 + 1)
  return -1;

 if (FUNC_4(VAR_4[VAR_5], &VAR_9))
  return -1;

 VAR_10.buf = FUNC_0(1, VAR_2);
 if (!VAR_10.buf)
  FUNC_2(1, "get TCB");

 VAR_10.mem_id = VAR_1;
 VAR_10.addr = VAR_9 * VAR_2;
 VAR_10.len = VAR_2;

 if (FUNC_1(VAR_6, VAR_0, &VAR_10) < 0)
  FUNC_2(1, "get TCB");

 for (VAR_7 = (uint64_t *)VAR_10.buf, VAR_8 = 0; VAR_8 < VAR_2 / 32; VAR_8++) {
  FUNC_5("%2u:", VAR_8);
  FUNC_5(" %08x %08x %08x %08x", (uint32_t)VAR_7[1],
         (uint32_t)(VAR_7[1] >> 32), (uint32_t)VAR_7[0],
         (uint32_t)(VAR_7[0] >> 32));
  VAR_7 += 2;
  FUNC_5(" %08x %08x %08x %08x\n", (uint32_t)VAR_7[1],
         (uint32_t)(VAR_7[1] >> 32), (uint32_t)VAR_7[0],
         (uint32_t)(VAR_7[0] >> 32));
  VAR_7 += 2;
 }
 FUNC_3(VAR_10.buf);
 return 0;
}
