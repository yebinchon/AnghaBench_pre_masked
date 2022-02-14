
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_patch ;
typedef int git_index ;
typedef int git_diff ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int *,int ) ;
 int FUNC_15 (TYPE_1__*,int *) ;
 int FUNC_16 (int **,int ) ;
 int FUNC_17 (char const*,TYPE_1__*) ;

void FUNC_18(void)
{
 const char *VAR_2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non nisi ligula. Ut viverra enim sed lobortis suscipit.\nPhasellus eget erat odio. Praesent at est iaculis, ultricies augue vel, dignissim risus. Suspendisse at nisi quis turpis fringilla rutrum id sit amet nulla.\nNam eget dolor fermentum, aliquet nisl at, convallis tellus. Pellentesque rhoncus erat enim, id porttitor elit euismod quis.\nMauris sollicitudin magna odio, non egestas libero vehicula ut. Etiam et quam velit. Fusce eget libero rhoncus, ultricies felis sit amet, egestas purus.\nAliquam in semper tellus. Pellentesque adipiscing rutrum velit, quis malesuada lacus consequat eget.\n";
 git_index *VAR_3;
 git_diff *VAR_4;
 git_patch *VAR_5;
 git_buf VAR_6 = VAR_0;
 const char *VAR_7 = "diff --git a/longlines.txt b/longlines.txt\nindex c1ce6ef..0134431 100644\n--- a/longlines.txt\n+++ b/longlines.txt\n@@ -3,3 +3,5 @@ Phasellus eget erat odio. Praesent at est iaculis, ultricies augue vel, dignissi\n Nam eget dolor fermentum, aliquet nisl at, convallis tellus. Pellentesque rhoncus erat enim, id porttitor elit euismod quis.\n Mauris sollicitudin magna odio, non egestas libero vehicula ut. Etiam et quam velit. Fusce eget libero rhoncus, ultricies felis sit amet, egestas purus.\n Aliquam in semper tellus. Pellentesque adipiscing rutrum velit, quis malesuada lacus consequat eget.\n+newline\n+newline\n";

 VAR_1 = FUNC_5("empty_standard_repo");

 FUNC_3("empty_standard_repo/longlines.txt", VAR_2);
 FUNC_4(FUNC_16(&VAR_3, VAR_1));
 FUNC_4(FUNC_10(VAR_3, "longlines.txt"));
 FUNC_4(FUNC_12(VAR_3));
 FUNC_11(VAR_3);

 FUNC_2("empty_standard_repo/longlines.txt", "newline\nnewline\n");

 FUNC_4(FUNC_8(&VAR_4, VAR_1, ((void*)0), ((void*)0)));
 FUNC_1(1, FUNC_9(VAR_4));
 FUNC_4(FUNC_14(&VAR_5, VAR_4, 0));
 FUNC_4(FUNC_15(&VAR_6, VAR_5));


 FUNC_17(VAR_7, &VAR_6);

 FUNC_0(VAR_7, VAR_6.ptr);

 FUNC_6(&VAR_6);
 FUNC_13(VAR_5);
 FUNC_7(VAR_4);
}
