
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timespec {int tv_sec; int tv_nsec; } ;
struct stat {scalar_t__ st_ino; scalar_t__ st_dev; scalar_t__ st_nlink; } ;
struct kevent {int dummy; } ;
typedef int off_t ;
struct TYPE_9__ {int file_name; int * fp; struct stat st; } ;
typedef TYPE_1__ file_info_t ;
typedef enum STYLE { ____Placeholder_STYLE } STYLE ;
struct TYPE_10__ {int ident; int data; int filter; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_6 ;
 TYPE_4__* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,int ,struct stat*) ;
 int FUNC_5 (scalar_t__,struct stat*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int *,int ,TYPE_4__*,int,struct timespec*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_8 () ;
 TYPE_1__* VAR_10 ;
 int FUNC_9 (int ,int ,int ) ;
 TYPE_4__* FUNC_10 (int) ;
 int FUNC_11 (struct stat*,struct stat*,int) ;
 int VAR_11 ;
 int FUNC_12 (int ,int) ;
 int VAR_12 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int) ;

void
FUNC_16(file_info_t *VAR_13, enum STYLE VAR_14, off_t VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19 = -1;
 struct stat VAR_20;
 file_info_t *VAR_21;
 FILE *VAR_22;
 struct timespec VAR_23;



 VAR_21 = VAR_13;
 VAR_16 = 0;
 VAR_19 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++, VAR_21++) {
  if (VAR_21->fp) {
   VAR_16 = 1;
   VAR_19++;
   if (VAR_11 > 1 && !VAR_12)
    FUNC_12(VAR_21->file_name, 1);
   FUNC_4(VAR_21->fp, VAR_21->file_name, VAR_14, VAR_15, &VAR_21->st);
   if (VAR_2 && FUNC_3(VAR_21->fp) != VAR_4)
    VAR_19++;
  }
 }
 if (!VAR_2 && !VAR_16)
  return;

 VAR_10 = --VAR_21;

 VAR_9 = FUNC_8();
 if (VAR_9 < 0)
  FUNC_0(1, "kqueue");
 VAR_7 = FUNC_10(VAR_19 * sizeof(struct kevent));
 if (! VAR_7)
     FUNC_0(1, "Couldn't allocate memory for kevents.");
 FUNC_13(VAR_13);

 for (;;) {
  VAR_17 = 0;
  if (VAR_2) {
   for (VAR_18 = 0, VAR_21 = VAR_13; VAR_18 < VAR_11; VAR_18++, VAR_21++) {
    if (!VAR_21->fp) {
     VAR_21->fp =
         FUNC_2(VAR_8, VAR_21->file_name,
         "r");
     if (VAR_21->fp != ((void*)0) &&
         FUNC_5(FUNC_3(VAR_21->fp), &VAR_21->st)
         == -1) {
      FUNC_1(VAR_21->fp);
      VAR_21->fp = ((void*)0);
     }
     if (VAR_21->fp != ((void*)0))
      VAR_17++;
     continue;
    }
    if (FUNC_3(VAR_21->fp) == VAR_4)
     continue;
    VAR_22 = FUNC_2(VAR_8, VAR_21->file_name, "r");
    if (VAR_22 == ((void*)0) ||
        FUNC_5(FUNC_3(VAR_21->fp), &VAR_20) == -1) {
     if (VAR_6 != VAR_0)
      FUNC_6(VAR_21->file_name);
     FUNC_14(VAR_21);
     if (VAR_21->fp != ((void*)0)) {
      FUNC_1(VAR_21->fp);
      VAR_21->fp = ((void*)0);
     }
     if (VAR_22 != ((void*)0)) {
      FUNC_1(VAR_22);
     }
     VAR_17++;
     continue;
    }

    if (VAR_20 != VAR_21->st.st_ino ||
        VAR_20 != VAR_21->st.st_dev ||
        VAR_20 == 0) {
     FUNC_14(VAR_21);
     FUNC_1(VAR_21->fp);
     VAR_21->fp = VAR_22;
     FUNC_11(&VAR_21->st, &VAR_20,
         sizeof(struct stat));
     VAR_17++;
    } else {
     FUNC_1(VAR_22);
    }
   }
  }

  for (VAR_18 = 0, VAR_21 = VAR_13; VAR_18 < VAR_11; VAR_18++, VAR_21++)
   if (VAR_21->fp && !FUNC_14(VAR_21))
    VAR_17++;

  if (VAR_17)
   FUNC_13(VAR_13);

  switch (VAR_5) {
  case 129:
   VAR_23.tv_sec = 1;
   VAR_23.tv_nsec = 0;




   VAR_19 = FUNC_7(VAR_9, ((void*)0), 0, VAR_7, 1, VAR_2 ? &VAR_23 : ((void*)0));
   if (VAR_19 < 0)
    FUNC_0(1, "kevent");
   if (VAR_19 == 0) {

    break;
   } else if (VAR_7->filter == VAR_1 && VAR_7->data < 0) {

    if (FUNC_9(VAR_7->ident, (off_t)0, VAR_3) == -1) {
     FUNC_6(VAR_21->file_name);
     continue;
    }
   }
   break;

  case 128:
   (void) FUNC_15(250000);
   break;
  }
 }
}
