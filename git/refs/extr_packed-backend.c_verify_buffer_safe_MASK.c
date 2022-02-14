
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snapshot {char* start; char* eof; TYPE_1__* refs; } ;
struct TYPE_4__ {int hexsz; } ;
struct TYPE_3__ {int path; } ;


 int FUNC_0 (int ,char const*,int) ;
 char* FUNC_1 (char const*,char const*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct snapshot *VAR_1)
{
 const char *VAR_2 = VAR_1->start;
 const char *VAR_3 = VAR_1->eof;
 const char *VAR_4;

 if (VAR_2 == VAR_3)
  return;

 VAR_4 = FUNC_1(VAR_2, VAR_3 - 1);
 if (*(VAR_3 - 1) != '\n' || VAR_3 - VAR_4 < VAR_0->hexsz + 2)
  FUNC_0(VAR_1->refs->path,
     VAR_4, VAR_3 - VAR_4);
}
