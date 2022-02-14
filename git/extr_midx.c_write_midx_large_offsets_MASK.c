
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct pack_midx_entry {int offset; } ;
struct hashfile {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct hashfile*,int) ;

__attribute__((used)) static size_t FUNC_2(struct hashfile *VAR_0, uint32_t VAR_1,
           struct pack_midx_entry *VAR_2, uint32_t VAR_3)
{
 struct pack_midx_entry *VAR_4 = VAR_2, *VAR_5 = VAR_2 + VAR_3;
 size_t VAR_6 = 0;

 while (VAR_1) {
  struct pack_midx_entry *VAR_7;
  uint64_t VAR_8;

  if (VAR_4 >= VAR_5)
   FUNC_0("too many large-offset objects");

  VAR_7 = VAR_4++;
  VAR_8 = VAR_7->offset;

  if (!(VAR_8 >> 31))
   continue;

  FUNC_1(VAR_0, VAR_8 >> 32);
  FUNC_1(VAR_0, VAR_8 & 0xffffffffUL);
  VAR_6 += 2 * sizeof(uint32_t);

  VAR_1--;
 }

 return VAR_6;
}
