
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* inodesin; int* symbolsin; char** tree; char const* symbol_eob; scalar_t__ uncompressed_size; int treelevels; int fpOut; int fpIn; } ;
typedef TYPE_1__ unpack_descriptor_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(const unpack_descriptor_t *VAR_1, off_t *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;
 off_t VAR_8 = 0;
 const char *VAR_9;
 VAR_3 = 0;
 VAR_4 = VAR_5 = 0;

 while ((VAR_5 = FUNC_2(VAR_1->fpIn)) != VAR_0) {
  FUNC_0(VAR_2, 1);
  FUNC_4(1);
  FUNC_1();






  for (VAR_7 = 7; VAR_7 >= 0; VAR_7--) {
   VAR_4 = (VAR_4 << 1) | ((VAR_5 >> VAR_7) & 1);


   if (VAR_4 >= VAR_1->inodesin[VAR_3]) {
    VAR_6 =
        VAR_4 - VAR_1->inodesin[VAR_3];
    if (VAR_6 > VAR_1->symbolsin[VAR_3])
     FUNC_5("File corrupt");

    VAR_9 =
        &(VAR_1->tree[VAR_3][VAR_6]);
    if ((VAR_9 == VAR_1->symbol_eob) &&
        (VAR_8 == VAR_1->uncompressed_size))
     goto finished;

    FUNC_3((*VAR_9), VAR_1->fpOut);
    VAR_8++;


    VAR_3 = 0; VAR_4 = 0;
   } else {
    VAR_3++;
    if (VAR_3 > VAR_1->treelevels)
     FUNC_5("File corrupt");
   }
  }
 }

finished:
 if (VAR_8 != VAR_1->uncompressed_size)
  FUNC_5("Premature EOF");
}
