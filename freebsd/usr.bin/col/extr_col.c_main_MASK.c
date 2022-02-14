
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wint_t ;
struct TYPE_7__ {int c_char; int c_column; int c_width; scalar_t__ c_set; } ;
struct TYPE_6__ {int l_line_len; int l_lsize; int l_max_col; int l_needs_sort; struct TYPE_6__* l_next; TYPE_2__* l_line; struct TYPE_6__* l_prev; } ;
typedef TYPE_1__ LINE ;
typedef scalar_t__ CSET ;
typedef TYPE_2__ CHAR ;



 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int const) ;







 int VAR_5 ;
 int FUNC_1 (int*,int) ;
 void* FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int,char*,char const*,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_7 ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,char**,char*) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* FUNC_16 (TYPE_2__*,unsigned int) ;
 int FUNC_17 (int ,char*) ;
 int VAR_16 ;
 int FUNC_18 (int ,int,int,char const**) ;
 int FUNC_19 () ;
 void* FUNC_20 (int) ;

int
FUNC_21(int VAR_17, char **VAR_18)
{
 wint_t VAR_19;
 CHAR *VAR_20;
 CSET VAR_21;
 LINE *VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32;
 const char *VAR_33;

 (void)FUNC_17(VAR_4, "");

 if (FUNC_4() == -1)
  FUNC_6(1, "unable to limit stdio");

 if (FUNC_3() < 0)
  FUNC_6(1, "unable to enter capability mode");

 VAR_10 = 256;
 VAR_6 = 1;
 while ((VAR_30 = FUNC_12(VAR_17, VAR_18, "bfhl:px")) != -1)
  switch (VAR_30) {
  case 'b':
   VAR_12 = 1;
   break;
  case 'f':
   VAR_7 = 1;
   break;
  case 'h':
   VAR_6 = 1;
   break;
  case 'l':
   VAR_10 = FUNC_18(VAR_13, 1,
       (VAR_3 - VAR_0) / 2, &VAR_33) * 2;
   if (VAR_33 != ((void*)0))
    FUNC_7(1, "bad -l argument, %s: %s", VAR_33,
     VAR_13);
   break;
  case 'p':
   VAR_15 = 1;
   break;
  case 'x':
   VAR_6 = 0;
   break;
  case '?':
  default:
   FUNC_19();
  }

 if (VAR_14 != VAR_17)
  FUNC_19();

 VAR_29 = VAR_24 = VAR_23 = VAR_31 = 0;
 VAR_25 = VAR_26 = VAR_28 = VAR_27 = 0;
 VAR_21 = VAR_8 = VAR_2;
 VAR_9 = VAR_22 = FUNC_2();

 while ((VAR_19 = FUNC_13()) != VAR_5) {
  if (!FUNC_14(VAR_19)) {
   switch (VAR_19) {
   case 139:
    if (VAR_24 == 0)
     continue;
    --VAR_24;
    continue;
   case 138:
    VAR_24 = 0;
    continue;
   case 137:
    switch(FUNC_13()) {





    case '\007':

    case 133:
     FUNC_1(&VAR_25, -2);
     break;
    case '\010':

    case 134:
     FUNC_1(&VAR_25, -1);
     break;
    case '\011':

    case 136:
     FUNC_1(&VAR_25, 1);
     if (VAR_25 > VAR_26)
      VAR_26 = VAR_25;
    }
    continue;
   case 135:
    FUNC_1(&VAR_25, 2);
    if (VAR_25 > VAR_26)
     VAR_26 = VAR_25;
    VAR_24 = 0;
    continue;
   case 130:
    ++VAR_24;
    continue;
   case 132:
    VAR_21 = VAR_2;
    continue;
   case 131:
    VAR_21 = VAR_1;
    continue;
   case 129:
    VAR_24 |= 7;
    ++VAR_24;
    continue;
   case 128:
    FUNC_1(&VAR_25, -2);
    continue;
   }
   if (FUNC_15(VAR_19)) {
    if ((VAR_32 = FUNC_20(VAR_19)) > 0)
     VAR_24 += VAR_32;
    continue;
   }
   if (!VAR_15)
    continue;
  }


  if (VAR_25 + VAR_29 != VAR_27) {
   LINE *VAR_34;


   VAR_29 = !VAR_7 && (VAR_25 & 1);

   if (VAR_25 + VAR_29 < VAR_27) {
    while (VAR_25 + VAR_29 < VAR_27 &&
        VAR_22->l_prev != ((void*)0)) {
     VAR_22 = VAR_22->l_prev;
     VAR_27--;
    }
    if (VAR_25 + VAR_29 < VAR_27) {
     if (VAR_28 == 0) {





      while (VAR_25 + VAR_29
          < VAR_27) {
       VAR_34 = FUNC_2();
       VAR_22->l_prev = VAR_34;
       VAR_34->l_next = VAR_22;
       VAR_22 = VAR_9 = VAR_34;
       VAR_23++;
       VAR_27--;
      }
     } else {
      if (!VAR_31++)
       FUNC_5(VAR_25);
      VAR_25 = VAR_27 - VAR_29;
     }
    }
   } else {

    while (VAR_25 + VAR_29 > VAR_27) {
     if (VAR_22->l_next == ((void*)0)) {
      VAR_22->l_next = FUNC_2();
      VAR_22->l_next->l_prev = VAR_22;
     }
     VAR_22 = VAR_22->l_next;
     VAR_27++;
    }
   }
   if (VAR_27 > VAR_28 &&
       VAR_27 - VAR_28 >=
       VAR_10 + VAR_0) {
    if (VAR_23) {
     FUNC_11(VAR_23);
     VAR_23 = 0;
    }
    FUNC_11(VAR_27 - VAR_28 -
        VAR_10);
    VAR_28 = VAR_27 - VAR_10;
   }
  }

  if (VAR_22->l_line_len + 1 >= VAR_22->l_lsize) {
   int VAR_35;

   VAR_35 = VAR_22->l_lsize ? VAR_22->l_lsize * 2 : 90;
   if ((VAR_22->l_line = FUNC_16(VAR_22->l_line,
       (unsigned)VAR_35 * sizeof(CHAR))) == ((void*)0))
    FUNC_6(1, ((void*)0));
   VAR_22->l_lsize = VAR_35;
  }
  VAR_20 = &VAR_22->l_line[VAR_22->l_line_len++];
  VAR_20->c_char = VAR_19;
  VAR_20->c_set = VAR_21;
  VAR_20->c_column = VAR_24;
  VAR_20->c_width = FUNC_20(VAR_19);




  if (VAR_24 < VAR_22->l_max_col)
   VAR_22->l_needs_sort = 1;
  else
   VAR_22->l_max_col = VAR_24;
  if (VAR_20->c_width > 0)
   VAR_24 += VAR_20->c_width;
 }
 if (FUNC_9(VAR_16))
  FUNC_6(1, ((void*)0));
 if (VAR_23)
  FUNC_11(VAR_23);


 for (; VAR_22->l_next; VAR_22 = VAR_22->l_next)
  VAR_27++;
 FUNC_11(VAR_27 - VAR_28 + 1);


 if (VAR_8 != VAR_2)
  FUNC_0(132);


 if (VAR_26 > VAR_27)
  VAR_11 = VAR_26 - VAR_27;
 if (VAR_26 & 1)
  VAR_11++;
 FUNC_10();
 FUNC_8(0);
}
