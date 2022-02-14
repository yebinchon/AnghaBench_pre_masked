
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct packed_git {int pack_name; int pack_local; struct packed_git* next; } ;
struct pack_info {int dummy; } ;
struct TYPE_5__ {int old_num; int new_num; struct packed_git* p; } ;


 int FUNC_0 (TYPE_1__**,int,size_t) ;
 int FUNC_1 (TYPE_1__**,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct packed_git* FUNC_3 (int ) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char const*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(const char *VAR_4, int VAR_5)
{
 struct packed_git *VAR_6;
 int VAR_7;
 int VAR_8;
 size_t VAR_9 = 0;

 for (VAR_6 = FUNC_3(VAR_3); VAR_6; VAR_6 = VAR_6->next) {



  if (!VAR_6->pack_local || !FUNC_2(VAR_6->pack_name))
   continue;

  VAR_8 = VAR_2++;
  FUNC_0(VAR_1, VAR_2, VAR_9);
  VAR_1[VAR_8] = FUNC_5(1, sizeof(struct pack_info));
  VAR_1[VAR_8]->p = VAR_6;
  VAR_1[VAR_8]->old_num = -1;
 }

 if (VAR_4 && !VAR_5)
  VAR_7 = FUNC_4(VAR_4);
 else
  VAR_7 = 1;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  if (VAR_7)
   VAR_1[VAR_8]->old_num = -1;


 FUNC_1(VAR_1, VAR_2, VAR_0);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_1[VAR_8]->new_num = VAR_8;
}
