
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx_entry {int user; int time; int id; } ;
struct utmpx {scalar_t__ ut_type; int ut_tv; int ut_id; } ;
struct timeval {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct utmpx_entry* FUNC_0 (int *) ;
 struct utmpx_entry* FUNC_1 (struct utmpx_entry*,int ) ;
 int FUNC_2 (struct utmpx_entry*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct utmpx_entry*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_6 (int *,int *,struct timeval*) ;
 int FUNC_7 (int ,struct timeval) ;

__attribute__((used)) static void
FUNC_8(const struct utmpx *VAR_5)
{
 struct utmpx_entry *VAR_6, *VAR_7, *VAR_8;
 struct timeval VAR_9;

 for (VAR_6 = FUNC_0(&VAR_1), VAR_7 = ((void*)0); VAR_6 != ((void*)0);)
  if (VAR_5->ut_type == VAR_0 || VAR_5->ut_type == VAR_3 ||
      (VAR_5->ut_type == VAR_2 &&
      FUNC_5(VAR_6->id, VAR_5->ut_id, sizeof(VAR_5->ut_id)) == 0)) {
   FUNC_6(&VAR_5->ut_tv, &VAR_6->time, &VAR_9);
   FUNC_7(VAR_6->user, VAR_9);



   VAR_8 = VAR_6;
   VAR_6 = FUNC_1(VAR_6, VAR_4);
   if (VAR_7 == ((void*)0))
    FUNC_3(&VAR_1, VAR_4);
   else
    FUNC_2(VAR_7, VAR_4);
   FUNC_4(VAR_8);
  } else {
   VAR_7 = VAR_6;
   VAR_6 = FUNC_1(VAR_6, VAR_4);
  }
}
