
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef void uint8_t ;
struct TYPE_5__ {int ish_vsize; } ;
struct TYPE_6__ {int ish_rawdataaddr; int ish_rawdatasize; int ish_vaddr; TYPE_1__ ish_misc; } ;
typedef TYPE_2__ image_section_header ;
struct TYPE_7__ {int ioh_filealign; } ;
typedef TYPE_3__ image_optional_header ;
typedef int image_nt_header ;
typedef int image_dos_header ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (void*,scalar_t__) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (void*,int) ;

__attribute__((used)) static int
FUNC_9(void **VAR_1, int *VAR_2)
{
        image_section_header *VAR_3;
        image_dos_header *VAR_4;
        image_nt_header *VAR_5;
 image_optional_header VAR_6;
        int VAR_7 = 0, VAR_8, VAR_9 = 0;
 int VAR_10 = 0, VAR_11, VAR_12;
 uint8_t *VAR_13, *VAR_14;

 VAR_13 = FUNC_5(*VAR_2);

 if (VAR_13 == ((void*)0))
  return(VAR_0);

 FUNC_2(*VAR_1, VAR_13, *VAR_2);
 VAR_9 = *VAR_2;

 if (FUNC_6((vm_offset_t)VAR_13, &VAR_6))
  return(0);

        VAR_8 = FUNC_7((vm_offset_t)VAR_13);

 FUNC_1(VAR_13);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_11 = VAR_3->ish_rawdataaddr;
  VAR_12 = VAR_3->ish_rawdatasize;
  VAR_3->ish_rawdataaddr = VAR_3->ish_vaddr;
  VAR_10 += FUNC_0(VAR_3->ish_vaddr - VAR_11,
      VAR_6.ioh_filealign);
  VAR_10 +=
      FUNC_0(VAR_3->ish_misc.ish_vsize,
        VAR_6.ioh_filealign) -
      FUNC_0(VAR_3->ish_rawdatasize,
        VAR_6.ioh_filealign);
  VAR_14 = FUNC_8(VAR_13, *VAR_2 + VAR_10);
  if (VAR_14 == ((void*)0)) {
   FUNC_4(VAR_13);
   return(VAR_0);
  }
  VAR_13 = VAR_14;
  FUNC_1(VAR_13);
  VAR_3 += VAR_7;
  FUNC_3(VAR_13 + VAR_3->ish_rawdataaddr,
      FUNC_0(VAR_3->ish_misc.ish_vsize,
      VAR_6.ioh_filealign));
  FUNC_2((uint8_t *)(*VAR_1) + VAR_11,
      VAR_13 + VAR_3->ish_rawdataaddr, VAR_12);
  VAR_3++;
 }

 FUNC_4(*VAR_1);

 *VAR_1 = VAR_13;
 *VAR_2 += VAR_10;

 return(0);
}
