
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; } ;
struct dpv_file_node {char* name; int length; char* path; struct dpv_file_node* next; } ;
struct dpv_config {char* backtitle; scalar_t__ display_type; char* status_solo; char* status_many; int label_size; char* output; int display_limit; int pbar_size; char* title; int status_updates_per_second; void* keep_tite; int action; void* output_type; int options; int * pprompt; void* debug; int * aprompt; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 scalar_t__ FUNC_0 (struct dpv_config*,struct dpv_file_node*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_18 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 struct dpv_file_node* VAR_19 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 void* VAR_20 ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (void*,char,size_t) ;
 void* VAR_21 ;
 scalar_t__ VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 char* VAR_26 ;
 scalar_t__ VAR_27 ;
 void* VAR_28 ;
 char* VAR_29 ;
 int VAR_30 ;
 int FUNC_9 (int ,struct sigaction*,int ) ;
 int FUNC_10 (int *,size_t,char*,char*) ;
 int FUNC_11 (char*,char*,int*,char*) ;
 int FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (char*,char**,int) ;
 int FUNC_16 () ;
 int FUNC_17 (char*) ;

int
FUNC_18(int VAR_31, char *VAR_32[])
{
 char VAR_33;
 int VAR_34;
 int VAR_35 = 0;
 size_t VAR_36 = sizeof(struct dpv_config);
 size_t VAR_37 = sizeof(struct dpv_file_node);
 struct dpv_config *VAR_38;
 struct dpv_file_node *VAR_39;
 struct sigaction VAR_40;

 VAR_29 = VAR_32[0];


 if ((VAR_38 = FUNC_7(VAR_36)) == ((void*)0))
  FUNC_3(VAR_12, "Out of memory?!");
 FUNC_8((void *)(VAR_38), '\0', VAR_36);




 while ((VAR_34 = FUNC_6(VAR_31, VAR_32,
     "a:b:dDhi:I:klL:mn:No:p:P:t:TU:wx:X")) != -1) {
  switch(VAR_34) {
  case 'a':
   if (VAR_38->aprompt == ((void*)0)) {
    VAR_38->aprompt = FUNC_7(VAR_1);
    if (VAR_38->aprompt == ((void*)0))
     FUNC_3(VAR_12, "Out of memory?!");
   }
   FUNC_10(VAR_38->aprompt, VAR_1, "%s",
       VAR_26);
   break;
  case 'b':
   if (VAR_38->backtitle != ((void*)0))
    FUNC_5((char *)VAR_38->backtitle);
   VAR_38->backtitle = FUNC_7(FUNC_14(VAR_26) + 1);
   if (VAR_38->backtitle == ((void*)0))
    FUNC_3(VAR_12, "Out of memory?!");
   *(VAR_38->backtitle) = '\0';
   FUNC_12(VAR_38->backtitle, VAR_26);
   break;
  case 'd':
   VAR_17 = VAR_16;
   VAR_38->debug = VAR_17;
   break;
  case 'D':
   VAR_38->display_type = VAR_2;
   break;
  case 'h':
   FUNC_16();
   break;
  case 'i':
   VAR_38->status_solo = VAR_26;
   break;
  case 'I':
   VAR_38->status_many = VAR_26;
   break;
  case 'k':
   VAR_38->keep_tite = VAR_16;
   break;
  case 'l':
   VAR_20 = VAR_16;
   break;
  case 'L':
   VAR_38->label_size =
       (int)FUNC_15(VAR_26, (char **)((void*)0), 10);
   if (VAR_38->label_size == 0 && VAR_18 == VAR_11)
    FUNC_3(VAR_12,
        "`-L' argument must be numeric");
   else if (VAR_38->label_size < -1)
    VAR_38->label_size = -1;
   break;
  case 'm':
   VAR_21 = VAR_16;
   break;
  case 'o':
   VAR_28 = VAR_6;
   VAR_38->output_type = VAR_6;
   VAR_38->output = VAR_26;
   break;
  case 'n':
   VAR_38->display_limit =
    (int)FUNC_15(VAR_26, (char **)((void*)0), 10);
   if (VAR_38->display_limit == 0 && VAR_18 == VAR_11)
    FUNC_3(VAR_12,
        "`-n' argument must be numeric");
   else if (VAR_38->display_limit < 0)
    VAR_38->display_limit = -1;
   break;
  case 'N':
   VAR_23 = VAR_16;
   VAR_38->options |= VAR_5;
   break;
  case 'p':
   if (VAR_38->pprompt == ((void*)0)) {
    VAR_38->pprompt = FUNC_7(VAR_8 + 2);
    if (VAR_38->pprompt == ((void*)0))
     FUNC_3(VAR_12, "Out of memory?!");

   }
   FUNC_10(VAR_38->pprompt, VAR_8, "%s",
       VAR_26);
   break;
  case 'P':
   VAR_38->pbar_size =
       (int)FUNC_15(VAR_26, (char **)((void*)0), 10);
   if (VAR_38->pbar_size == 0 && VAR_18 == VAR_11)
    FUNC_3(VAR_12,
        "`-P' argument must be numeric");
   else if (VAR_38->pbar_size < -1)
    VAR_38->pbar_size = -1;
   break;
  case 't':
   if (VAR_38->title != ((void*)0))
    FUNC_5(VAR_38->title);
   VAR_38->title = FUNC_7(FUNC_14(VAR_26) + 1);
   if (VAR_38->title == ((void*)0))
    FUNC_3(VAR_12, "Out of memory?!");
   *(VAR_38->title) = '\0';
   FUNC_12(VAR_38->title, VAR_26);
   break;
  case 'T':
   VAR_38->options |= VAR_9;
   break;
  case 'U':
   VAR_38->status_updates_per_second =
       (int)FUNC_15(VAR_26, (char **)((void*)0), 10);
   if (VAR_38->status_updates_per_second == 0 &&
       VAR_18 == VAR_11)
    FUNC_3(VAR_12,
        "`-U' argument must be numeric");
   break;
  case 'w':
   VAR_38->options |= VAR_10;
   break;
  case 'x':
   VAR_28 = VAR_7;
   VAR_38->output_type = VAR_7;
   VAR_38->output = VAR_26;
   break;
  case 'X':
   VAR_38->display_type = VAR_4;
   break;
  case '?':

  default:
   FUNC_16();

  }
 }
 VAR_31 -= VAR_27;
 VAR_32 += VAR_27;


 for (VAR_39 = VAR_19; VAR_35 < VAR_31; VAR_35++) {
  VAR_22++;


  if (VAR_39 == ((void*)0)) {
   if ((VAR_39 = FUNC_7(VAR_37)) == ((void*)0))
    FUNC_3(VAR_12, "Out of memory?!");
   FUNC_8((void *)(VAR_39), '\0', VAR_37);
   VAR_19 = VAR_39;
  } else {
   if ((VAR_39->next = FUNC_7(VAR_37)) == ((void*)0))
    FUNC_3(VAR_12, "Out of memory?!");
   FUNC_8((void *)(VAR_39->next), '\0', VAR_37);
   VAR_39 = VAR_39->next;
  }
  VAR_39->name = VAR_32[VAR_35];


  if (FUNC_11(VAR_39->name, "%lli:%c", &(VAR_39->length),
      &VAR_33) == 2)
   VAR_39->name = FUNC_13(VAR_39->name, ':') + 1;
  else
   VAR_39->length = -1;


  if (VAR_21) {
   if (++VAR_35 >= VAR_31)
    FUNC_3(VAR_12, "Missing path argument "
        "for label number %i", VAR_22);
   VAR_39->path = VAR_32[VAR_35];
  } else
   break;
 }


 if (VAR_22 == 0) {
  FUNC_17("no labels provided");
  FUNC_16();

 }




 if (VAR_38->display_type == VAR_3) {
  VAR_40.sa_handler = VAR_30;
  FUNC_9(VAR_15, &VAR_40, 0);
 }


 if (VAR_20) {
  VAR_38->status_solo = VAR_14;
  VAR_38->status_many = VAR_14;
  VAR_38->action = VAR_25;
 } else {
  VAR_38->status_solo = VAR_0;
  VAR_38->status_many = VAR_0;
  VAR_38->action = VAR_24;
 }




 if (FUNC_0(VAR_38, VAR_19) != 0 && VAR_17)
  FUNC_17("dpv(3) returned error!?");

 if (!VAR_38->keep_tite)
  FUNC_2();
 FUNC_1();

 FUNC_4(VAR_13);
}
