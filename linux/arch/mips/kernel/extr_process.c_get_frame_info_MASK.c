
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union mips_instruction {int* halfword; int word; } ;
typedef int ulong ;
struct mips_frame_info {int pc_offset; int frame_size; scalar_t__ func; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (union mips_instruction*) ;
 scalar_t__ FUNC_2 (union mips_instruction*,int*) ;
 int FUNC_3 (union mips_instruction*,int *) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mips_frame_info *VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_0);
 union mips_instruction VAR_3, *VAR_4;
 const unsigned int VAR_5 = 128;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7;
 bool VAR_8 = 0;

 VAR_1->pc_offset = -1;
 VAR_1->frame_size = 0;

 VAR_4 = (void *)FUNC_5((ulong)VAR_1->func);
 if (!VAR_4)
  goto err;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_4 = (void *)VAR_4 + VAR_6;

  if (VAR_2 && FUNC_4(VAR_4->halfword[0])) {
   VAR_3.word = VAR_4->halfword[0] << 16;
   VAR_6 = 2;
  } else if (VAR_2) {
   VAR_3.word = VAR_4->halfword[0] << 16 | VAR_4->halfword[1];
   VAR_6 = 4;
  } else {
   VAR_3.word = VAR_4->word;
   VAR_6 = 4;
  }

  if (!VAR_1->frame_size) {
   FUNC_3(&VAR_3, &VAR_1->frame_size);
   continue;
  } else if (!VAR_8 && FUNC_1(VAR_4)) {
   VAR_8 = 1;
   continue;
  }
  if (VAR_1->pc_offset == -1 &&
      FUNC_2(&VAR_3, &VAR_1->pc_offset))
   break;
  if (VAR_8)
   break;
 }
 if (VAR_1->frame_size && VAR_1->pc_offset >= 0)
  return 0;
 if (VAR_1->pc_offset < 0)
  return 1;

err:
 return -1;
}
