
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; int filename; } ;
typedef TYPE_1__ file_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,scalar_t__,int) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,unsigned char*,scalar_t__,int ) ;
 int FUNC_4 (int,char*,int ,int ) ;

int FUNC_5 (file_t *VAR_2, file_t *VAR_3) {
  if (VAR_3->size < VAR_0) {
    return -10;
  }
  unsigned char VAR_4[VAR_0], VAR_5[VAR_0];
  if (FUNC_3 (VAR_2, VAR_4, VAR_0, 0) < 0) {
    return -7;
  }
  if (FUNC_3 (VAR_3, VAR_5, VAR_0, 0) < 0) {
    return -8;
  }
  if (FUNC_2 (VAR_4, VAR_5, VAR_0)) {
    FUNC_1 ("%s isn't prefix of %s\n", VAR_3->filename, VAR_2->filename);
    return -9;
  }
  FUNC_4 (3, "First 36 bytes are equal (%s, %s).\n", VAR_2->filename, VAR_3->filename);
  VAR_1 = FUNC_0 (VAR_4, VAR_0, -1);
  return 0;
}
