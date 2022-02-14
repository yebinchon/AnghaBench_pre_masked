
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct debug_view {int dummy; } ;
struct TYPE_5__ {char* string; int * args; } ;
typedef TYPE_1__ debug_sprintf_entry_t ;
struct TYPE_6__ {int buf_size; } ;
typedef TYPE_2__ debug_info_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(debug_info_t *VAR_1, struct debug_view *VAR_2,
       char *VAR_3, debug_sprintf_entry_t *VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7, VAR_8 = 0;
 int VAR_9[VAR_0];


 VAR_5 = VAR_1->buf_size / sizeof(long);

 if (VAR_5 < 1)
  goto out;
 if (VAR_5 == 1) {

  FUNC_3(VAR_3, VAR_4->string);
  VAR_8 = FUNC_4(VAR_4->string);
  goto out;
 }


 VAR_6 = FUNC_1(VAR_0, (VAR_5 - 1));

 FUNC_0(VAR_9, 0, VAR_0 * sizeof(int));

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  VAR_9[VAR_7] = VAR_7;

 VAR_8 = FUNC_2(VAR_3, VAR_4->string, VAR_4->args[VAR_9[0]],
       VAR_4->args[VAR_9[1]], VAR_4->args[VAR_9[2]],
       VAR_4->args[VAR_9[3]], VAR_4->args[VAR_9[4]],
       VAR_4->args[VAR_9[5]], VAR_4->args[VAR_9[6]],
       VAR_4->args[VAR_9[7]], VAR_4->args[VAR_9[8]],
       VAR_4->args[VAR_9[9]]);
out:
 return VAR_8;
}
