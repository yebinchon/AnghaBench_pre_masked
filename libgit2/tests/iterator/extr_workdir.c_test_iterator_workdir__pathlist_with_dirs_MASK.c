
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int length; scalar_t__ contents; } ;
typedef TYPE_2__ git_vector ;
struct TYPE_10__ {char** strings; int count; } ;
struct TYPE_12__ {void* flags; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;


 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,size_t,char const**,size_t,char const**) ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int **,int ,int *,int *,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int,int *) ;
 int FUNC_10 (TYPE_2__*,char*) ;

void FUNC_11(void)
{
 git_iterator *VAR_5;
 git_iterator_options VAR_6 = VAR_2;
 git_vector VAR_7;

 FUNC_1(FUNC_9(&VAR_7, 5, ((void*)0)));

 VAR_4 = FUNC_2("icase");


 {
  const char *VAR_8[] = { "k/1", "k/B", "k/D", "k/a", "k/c" };
  size_t VAR_9 = 5;

  FUNC_7(&VAR_7);
  FUNC_1(FUNC_10(&VAR_7, "k"));

  VAR_6.pathlist.strings = (char **)VAR_7.contents;
  VAR_6.pathlist.count = VAR_7.length;
  VAR_6.flags = VAR_0;

  FUNC_1(FUNC_5(&VAR_5, VAR_4, ((void*)0), ((void*)0), &VAR_6));
  FUNC_3(VAR_5, VAR_9, VAR_8, VAR_9, VAR_8);
  FUNC_6(VAR_5);
 }


 {
  const char *VAR_10[] = { "k/1", "k/B", "k/D", "k/a", "k/c" };
  size_t VAR_11 = 5;

  FUNC_7(&VAR_7);
  FUNC_1(FUNC_10(&VAR_7, "k/"));

  VAR_6.pathlist.strings = (char **)VAR_7.contents;
  VAR_6.pathlist.count = VAR_7.length;
  VAR_6.flags = VAR_0;

  FUNC_1(FUNC_5(&VAR_5, VAR_4, ((void*)0), ((void*)0), &VAR_6));
  FUNC_3(VAR_5, VAR_11, VAR_10, VAR_11, VAR_10);
  FUNC_6(VAR_5);
 }




 {
  FUNC_7(&VAR_7);
  FUNC_1(FUNC_10(&VAR_7, "K/"));

  VAR_6.pathlist.strings = (char **)VAR_7.contents;
  VAR_6.pathlist.count = VAR_7.length;
  VAR_6.flags = VAR_0;

  FUNC_1(FUNC_5(&VAR_5, VAR_4, ((void*)0), ((void*)0), &VAR_6));
  FUNC_0(VAR_3, FUNC_4(((void*)0), VAR_5));
  FUNC_6(VAR_5);
 }


 {
  const char *VAR_12[] = { "k/1", "k/a", "k/B", "k/c", "k/D" };
  size_t VAR_13 = 5;

  FUNC_7(&VAR_7);
  FUNC_1(FUNC_10(&VAR_7, "K/"));

  VAR_6.pathlist.strings = (char **)VAR_7.contents;
  VAR_6.pathlist.count = VAR_7.length;
  VAR_6.flags = VAR_1;

  FUNC_1(FUNC_5(&VAR_5, VAR_4, ((void*)0), ((void*)0), &VAR_6));
  FUNC_3(VAR_5, VAR_13, VAR_12, VAR_13, VAR_12);
  FUNC_6(VAR_5);
 }


 {
  const char *VAR_14[] = { "k/1", "k/a", "k/B", "k/c", "k/D" };
  size_t VAR_15 = 5;

  FUNC_7(&VAR_7);
  FUNC_1(FUNC_10(&VAR_7, "K"));

  VAR_6.pathlist.strings = (char **)VAR_7.contents;
  VAR_6.pathlist.count = VAR_7.length;
  VAR_6.flags = VAR_1;

  FUNC_1(FUNC_5(&VAR_5, VAR_4, ((void*)0), ((void*)0), &VAR_6));
  FUNC_3(VAR_5, VAR_15, VAR_14, VAR_15, VAR_14);
  FUNC_6(VAR_5);
 }

 FUNC_8(&VAR_7);
}
