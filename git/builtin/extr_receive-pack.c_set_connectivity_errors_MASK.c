
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shallow_info {scalar_t__* shallow_ref; } ;
struct command {size_t index; char* error_string; struct command* next; } ;
struct check_connected_options {int env; } ;


 struct check_connected_options VAR_0 ;
 int FUNC_0 (int ,struct command**,struct check_connected_options*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct command *VAR_4,
        struct shallow_info *VAR_5)
{
 struct command *VAR_6;

 for (VAR_6 = VAR_4; VAR_6; VAR_6 = VAR_6->next) {
  struct command *VAR_7 = VAR_6;
  struct check_connected_options VAR_8 = VAR_0;

  if (VAR_2 && VAR_5->shallow_ref[VAR_6->index])

   continue;

  VAR_8.env = FUNC_1(VAR_3);
  if (!FUNC_0(VAR_1, &VAR_7,
         &VAR_8))
   continue;

  VAR_6->error_string = "missing necessary objects";
 }
}
