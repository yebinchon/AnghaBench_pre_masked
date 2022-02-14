
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int str_flags; char str_delim; } ;
struct TYPE_5__ {TYPE_4__ tbl; int inf; } ;
typedef TYPE_1__ FILEDESC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_4__) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_9(FILEDESC *VAR_7)
{
 char *VAR_8;
 unsigned char VAR_9;
 char VAR_10[VAR_0];

 FUNC_8(VAR_7);
 FUNC_4(VAR_7->inf, VAR_5[0], VAR_2);
 for (VAR_1 = 0; FUNC_2(VAR_10, sizeof VAR_10, VAR_7->inf) != ((void*)0) &&
     !FUNC_0(VAR_10, VAR_7->tbl); VAR_1++) {
  if (VAR_7->tbl.str_flags & VAR_4)
   for (VAR_8 = VAR_10; (VAR_9 = *VAR_8) != '\0'; ++VAR_8) {
    if (FUNC_5(VAR_9)) {
     if (FUNC_7(VAR_9))
      *VAR_8 = 'A' + (VAR_9 - 'A' + 13) % 26;
     else if (FUNC_6(VAR_9))
      *VAR_8 = 'a' + (VAR_9 - 'a' + 13) % 26;
    }
   }
  if (VAR_7->tbl.str_flags & VAR_3
      && VAR_10[0] == VAR_7->tbl.str_delim
      && VAR_10[1] == VAR_7->tbl.str_delim)
   continue;
  FUNC_3(VAR_10, VAR_6);
 }
 (void) FUNC_1(VAR_6);
}
