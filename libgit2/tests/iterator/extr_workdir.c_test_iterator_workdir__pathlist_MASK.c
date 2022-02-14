
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int length; scalar_t__ contents; } ;
typedef TYPE_2__ git_vector ;
struct TYPE_9__ {char** strings; int count; } ;
struct TYPE_11__ {char* start; char* end; void* flags; TYPE_1__ pathlist; } ;
typedef TYPE_3__ git_iterator_options ;
typedef int git_iterator ;


 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,size_t,char const**,size_t,char const**) ;
 int VAR_3 ;
 int FUNC_3 (int **,int ,int *,int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int,int *) ;
 int FUNC_7 (TYPE_2__*,char*) ;

void FUNC_8(void)
{
 git_iterator *VAR_4;
 git_iterator_options VAR_5 = VAR_2;
 git_vector VAR_6;

 FUNC_0(FUNC_6(&VAR_6, 100, ((void*)0)));
 FUNC_0(FUNC_7(&VAR_6, "a"));
 FUNC_0(FUNC_7(&VAR_6, "B"));
 FUNC_0(FUNC_7(&VAR_6, "c"));
 FUNC_0(FUNC_7(&VAR_6, "D"));
 FUNC_0(FUNC_7(&VAR_6, "e"));
 FUNC_0(FUNC_7(&VAR_6, "k.a"));
 FUNC_0(FUNC_7(&VAR_6, "k.b"));
 FUNC_0(FUNC_7(&VAR_6, "k/1"));
 FUNC_0(FUNC_7(&VAR_6, "k/a"));
 FUNC_0(FUNC_7(&VAR_6, "kZZZZZZZ"));
 FUNC_0(FUNC_7(&VAR_6, "L/1"));

 VAR_3 = FUNC_1("icase");



 VAR_5.pathlist.strings = (char **)VAR_6.contents;
 VAR_5.pathlist.count = VAR_6.length;


 {
  const char *VAR_7[] = {
   "B", "D", "L/1", "a", "c", "e", "k/1", "k/a" };
  size_t VAR_8 = 8;

  VAR_5.start = ((void*)0);
  VAR_5.end = ((void*)0);
  VAR_5.flags = VAR_0;

  FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
  FUNC_2(VAR_4, VAR_8, VAR_7, VAR_8, VAR_7);
  FUNC_4(VAR_4);
 }


 {
  const char *VAR_9[] = {
   "a", "B", "c", "D", "e", "k/1", "k/a", "L/1" };
  size_t VAR_10 = 8;

  VAR_5.start = ((void*)0);
  VAR_5.end = ((void*)0);
  VAR_5.flags = VAR_1;

  FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
  FUNC_2(VAR_4, VAR_10, VAR_9, VAR_10, VAR_9);
  FUNC_4(VAR_4);
 }


 {
  const char *VAR_11[] = { "c", "e", "k/1", "k/a" };
  size_t VAR_12 = 4;

  VAR_5.start = "c";
  VAR_5.end = ((void*)0);
  VAR_5.flags = VAR_0;

  FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
  FUNC_2(VAR_4, VAR_12, VAR_11, VAR_12, VAR_11);
  FUNC_4(VAR_4);
 }


 {
  const char *VAR_13[] = { "c", "D", "e", "k/1", "k/a", "L/1" };
  size_t VAR_14 = 6;

  VAR_5.start = "c";
  VAR_5.end = ((void*)0);
  VAR_5.flags = VAR_1;

  FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
  FUNC_2(VAR_4, VAR_14, VAR_13, VAR_14, VAR_13);
  FUNC_4(VAR_4);
 }


 {
  const char *VAR_15[] = { "B", "D", "L/1", "a", "c", "e" };
  size_t VAR_16 = 6;

  VAR_5.start = ((void*)0);
  VAR_5.end = "e";
  VAR_5.flags = VAR_0;

  FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
  FUNC_2(VAR_4, VAR_16, VAR_15, VAR_16, VAR_15);
  FUNC_4(VAR_4);
 }


 {
  const char *VAR_17[] = { "a", "B", "c", "D", "e" };
  size_t VAR_18 = 5;

  VAR_5.start = ((void*)0);
  VAR_5.end = "e";
  VAR_5.flags = VAR_1;

  FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
  FUNC_2(VAR_4, VAR_18, VAR_17, VAR_18, VAR_17);
  FUNC_4(VAR_4);
 }


 {
  const char *VAR_19[] = { "c", "e", "k/1" };
  size_t VAR_20 = 3;

  VAR_5.start = "c";
  VAR_5.end = "k/D";
  VAR_5.flags = VAR_0;

  FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
  FUNC_2(VAR_4, VAR_20, VAR_19, VAR_20, VAR_19);
  FUNC_4(VAR_4);
 }


 {
  const char *VAR_21[] = { "k/1" };
  size_t VAR_22 = 1;

  VAR_5.start = "k";
  VAR_5.end = "k/D";
  VAR_5.flags = VAR_0;

  FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
  FUNC_2(VAR_4, VAR_22, VAR_21, VAR_22, VAR_21);
  FUNC_4(VAR_4);
 }


 {
  const char *VAR_23[] = { "c", "D", "e", "k/1", "k/a" };
  size_t VAR_24 = 5;

  VAR_5.start = "c";
  VAR_5.end = "k/D";
  VAR_5.flags = VAR_1;

  FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
  FUNC_2(VAR_4, VAR_24, VAR_23, VAR_24, VAR_23);
  FUNC_4(VAR_4);
 }


 {
  const char *VAR_25[] = { "k/1", "k/a" };
  size_t VAR_26 = 2;

  VAR_5.start = "k";
  VAR_5.end = "k/D";
  VAR_5.flags = VAR_1;

  FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
  FUNC_2(VAR_4, VAR_26, VAR_25, VAR_26, VAR_25);
  FUNC_4(VAR_4);
 }

 FUNC_5(&VAR_6);
}
