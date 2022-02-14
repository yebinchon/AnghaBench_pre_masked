
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int uncompressed_size; unsigned char treelevels; unsigned char* symbolsin; int symbol_size; int * symbol_eob; int * fpIn; int ** tree; int * symbol; int * inodesin; int * fpOut; } ;
typedef TYPE_1__ unpack_descriptor_t ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 void* FUNC_1 (int,int) ;
 void* FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (unsigned char*,char*,size_t) ;
 scalar_t__ FUNC_8 (int,unsigned char*,size_t) ;
 int FUNC_9 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_10(int VAR_3, int VAR_4, char *VAR_5, size_t VAR_6, off_t *VAR_7,
    unpack_descriptor_t *VAR_8)
{
 unsigned char VAR_9[VAR_2];
 ssize_t VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (VAR_6 > sizeof VAR_9)
  FUNC_5("prelen too long");


 if (VAR_6 != 0)
  FUNC_7(VAR_9, VAR_5, VAR_6);


 VAR_10 = FUNC_8(VAR_3, VAR_9 + VAR_6, VAR_2 - VAR_6);
 if (VAR_10 < 0)
  FUNC_5("Error reading pack header");
 FUNC_4(VAR_10);

 FUNC_0(VAR_7, VAR_2);


 VAR_8->uncompressed_size = 0;
 for (VAR_11 = 2; VAR_11 <= 5; VAR_11++) {
  VAR_8->uncompressed_size <<= 8;
  VAR_8->uncompressed_size |= VAR_9[VAR_11];
 }


 VAR_8->treelevels = VAR_9[6];
 if (VAR_8->treelevels > VAR_1 || VAR_8->treelevels < 1)
  FUNC_6("Huffman tree has insane levels");


 if ((VAR_8->fpIn = FUNC_2(VAR_3, "r")) == ((void*)0))
  FUNC_5("Can not fdopen() input stream");
 if ((VAR_8->fpOut = FUNC_2(VAR_4, "w")) == ((void*)0))
  FUNC_5("Can not fdopen() output stream");


 VAR_8->inodesin =
     FUNC_1(VAR_8->treelevels, sizeof(*(VAR_8->inodesin)));
 VAR_8->symbolsin =
     FUNC_1(VAR_8->treelevels, sizeof(*(VAR_8->symbolsin)));
 VAR_8->tree =
     FUNC_1(VAR_8->treelevels, (sizeof(*(VAR_8->tree))));
 if (VAR_8->inodesin == ((void*)0) || VAR_8->symbolsin == ((void*)0) ||
     VAR_8->tree == ((void*)0))
  FUNC_5("calloc");


 VAR_8->treelevels--;


 VAR_8->symbol_size = 1;
 for (VAR_11 = 0; VAR_11 <= VAR_8->treelevels; VAR_11++) {
  if ((VAR_13 = FUNC_3(VAR_8->fpIn)) == VAR_0)
   FUNC_5("File appears to be truncated");
  VAR_8->symbolsin[VAR_11] = (unsigned char)VAR_13;
  VAR_8->symbol_size += VAR_8->symbolsin[VAR_11];
 }
 FUNC_0(VAR_7, VAR_8->treelevels);
 if (VAR_8->symbol_size > 256)
  FUNC_6("Bad symbol table");
 FUNC_4(VAR_8->treelevels);


 VAR_8->symbol_eob = VAR_8->symbol = FUNC_1(1, VAR_8->symbol_size);
 if (VAR_8->symbol == ((void*)0))
  FUNC_5("calloc");
 VAR_8->symbolsin[VAR_8->treelevels]++;
 for (VAR_11 = 0; VAR_11 <= VAR_8->treelevels; VAR_11++) {
  VAR_8->tree[VAR_11] = VAR_8->symbol_eob;
  for (VAR_12 = 0; VAR_12 < VAR_8->symbolsin[VAR_11]; VAR_12++) {
   if ((VAR_13 = FUNC_3(VAR_8->fpIn)) == VAR_0)
    FUNC_6("Symbol table truncated");
   *VAR_8->symbol_eob++ = (char)VAR_13;
  }
  FUNC_4(VAR_8->symbolsin[VAR_11]);
  FUNC_0(VAR_7, VAR_8->symbolsin[VAR_11]);
 }


 VAR_8->symbolsin[VAR_8->treelevels]++;





 FUNC_9(VAR_8, 0);
}
