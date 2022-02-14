
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int comment_delimiter_on_blankline; int max_col; int unindent_displace; int ind_size; int block_comment_max_col; int decl_com_ind; int com_ind; int tabsize; scalar_t__ star_comment_cont; scalar_t__ blanklines_before_blockcomments; int format_col1_comments; int format_block_comments; } ;
struct TYPE_3__ {int just_saw_decl; int box_com; int com_col; int ind_level; int n_comment_delta; scalar_t__ last_token; int use_ff; int last_nl; scalar_t__ comment_delta; scalar_t__ decl_on_line; scalar_t__ col_1; int out_coms; } ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int,char*,char*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 () ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*,char,int) ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (char*) ;
 TYPE_1__ VAR_11 ;
 scalar_t__ VAR_12 ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 int VAR_17 ;

void
FUNC_9(void)
{
    int VAR_18;
    int VAR_19;

    char *VAR_20;

    char *VAR_21;
    int VAR_22 = VAR_9.comment_delimiter_on_blankline;
    int VAR_23 = VAR_11.just_saw_decl;

    VAR_19 = VAR_9.max_col;
    VAR_11.just_saw_decl = 0;
    VAR_20 = ((void*)0);
    VAR_11.box_com = 0;


    ++VAR_11.out_coms;



    if (VAR_11.col_1 && !VAR_9.format_col1_comments) {

 VAR_11.box_com = 1;
 VAR_22 = 0;
 VAR_11.com_col = 1;
    }
    else {
 if (*VAR_1 == '-' || *VAR_1 == '*' ||
     (*VAR_1 == '\n' && !VAR_9.format_block_comments)) {
     VAR_11.box_com = 1;






     VAR_22 = 0;
 }
 if ( (VAR_14 == VAR_4) && (VAR_12 == VAR_2)) {





     VAR_11.com_col = (VAR_11.ind_level - VAR_9.unindent_displace) * VAR_9.ind_size + 1;
     VAR_19 = VAR_9.block_comment_max_col;
     if (VAR_11.com_col <= 1)
  VAR_11.com_col = 1 + !VAR_9.format_col1_comments;
 }
 else {
     int VAR_24;
     VAR_22 = 0;
     if (VAR_12 != VAR_2)
  VAR_24 = FUNC_3(FUNC_1(), VAR_12);
     else {
  VAR_24 = 1;
  if (VAR_14 != VAR_4)
      VAR_24 = FUNC_3(FUNC_2(), VAR_14);
     }
     VAR_11.com_col = VAR_11.decl_on_line || VAR_11.ind_level == 0 ? VAR_9.decl_com_ind : VAR_9.com_ind;
     if (VAR_11.com_col <= VAR_24)
  VAR_11.com_col = VAR_9.tabsize * (1 + (VAR_24 - 1) / VAR_9.tabsize) + 1;
     if (VAR_11.com_col + 24 > VAR_19)
  VAR_19 = VAR_11.com_col + 24;
 }
    }
    if (VAR_11.box_com) {
 char *VAR_25;

 VAR_25 = VAR_1 >= VAR_15 && VAR_1 < VAR_15 + VAR_17 ?
     VAR_16 : VAR_6;
 VAR_11.n_comment_delta = 1 - FUNC_4(1, VAR_25, VAR_1 - 2);
    }
    else {
 VAR_11.n_comment_delta = 0;
 while (*VAR_1 == ' ' || *VAR_1 == '\t')
     VAR_1++;
    }
    VAR_11.comment_delta = 0;
    *VAR_3++ = '/';
    *VAR_3++ = '*';
    if (*VAR_1 != ' ' && !VAR_11.box_com)
 *VAR_3++ = ' ';




    if (VAR_22)
 for (VAR_21 = VAR_1; *VAR_21 != '\0' && *VAR_21 != '\n'; VAR_21++) {
     if (VAR_21 >= VAR_0)
  FUNC_6();
     if (VAR_21[0] == '*' && VAR_21[1] == '/') {
  if (VAR_19 >= FUNC_4(VAR_11.com_col, VAR_1, VAR_21 + 2))
      VAR_22 = 0;
  break;
     }
 }

    if (VAR_22) {
 char *VAR_26 = VAR_3;
 VAR_3 = VAR_13 + 2;
 *VAR_3 = 0;
 if (VAR_9.blanklines_before_blockcomments && VAR_11.last_token != VAR_7)
     VAR_10 = 1;
 FUNC_5();
 VAR_3 = VAR_13 = VAR_26;
 if (!VAR_11.box_com && VAR_9.star_comment_cont)
     *VAR_3++ = ' ', *VAR_3++ = '*', *VAR_3++ = ' ';
    }



    while (1) {

 switch (*VAR_1) {
 case 014:
     FUNC_0(3);
     if (!VAR_11.box_com) {
  VAR_11.use_ff = 1;

  FUNC_5();
  VAR_20 = ((void*)0);
  if (!VAR_11.box_com && VAR_9.star_comment_cont)
      *VAR_3++ = ' ', *VAR_3++ = '*', *VAR_3++ = ' ';
  while (*++VAR_1 == ' ' || *VAR_1 == '\t')
      ;
     }
     else {
  if (++VAR_1 >= VAR_0)
      FUNC_6();
  *VAR_3++ = 014;
     }
     break;

 case '\n':
     if (VAR_5) {
  FUNC_8("Unterminated comment\n");
  FUNC_5();
  return;
     }
     VAR_20 = ((void*)0);
     FUNC_0(4);
     if (VAR_11.box_com || VAR_11.last_nl) {

  if (VAR_13 == VAR_3)
      *VAR_3++ = ' ';
  if (!VAR_11.box_com && VAR_3 - VAR_13 > 3) {
      FUNC_5();
      if (VAR_9.star_comment_cont)
   *VAR_3++ = ' ', *VAR_3++ = '*', *VAR_3++ = ' ';
  }
  FUNC_5();
  if (!VAR_11.box_com && VAR_9.star_comment_cont)
      *VAR_3++ = ' ', *VAR_3++ = '*', *VAR_3++ = ' ';
     }
     else {
  VAR_11.last_nl = 1;
  if (*(VAR_3 - 1) == ' ' || *(VAR_3 - 1) == '\t')
      VAR_20 = VAR_3 - 1;




  else {
      VAR_20 = VAR_3;
      *VAR_3++ = ' ';
  }
     }
     ++VAR_8;
     if (!VAR_11.box_com) {
  int VAR_27 = 1;
  do {

      if (++VAR_1 >= VAR_0)
   FUNC_6();
      if (*VAR_1 == '*' && --VAR_27 >= 0) {
   if (++VAR_1 >= VAR_0)
       FUNC_6();
   if (*VAR_1 == '/')
       goto end_of_comment;
      }
  } while (*VAR_1 == ' ' || *VAR_1 == '\t');
     }
     else if (++VAR_1 >= VAR_0)
  FUNC_6();
     break;

 case '*':

     if (++VAR_1 >= VAR_0)
  FUNC_6();
     FUNC_0(4);
     if (*VAR_1 == '/') {
 end_of_comment:
  if (++VAR_1 >= VAR_0)
      FUNC_6();
  if (VAR_22) {
      if (VAR_3 > VAR_13 + 3) {
   FUNC_5();
      }
      else
   VAR_13 = VAR_3;
      *VAR_3++ = ' ';
  }
  if (VAR_3[-1] != ' ' && VAR_3[-1] != '\t' && !VAR_11.box_com)
      *VAR_3++ = ' ';
  *VAR_3++ = '*', *VAR_3++ = '/', *VAR_3 = '\0';
  VAR_11.just_saw_decl = VAR_23;
  return;
     }
     else
  *VAR_3++ = '*';
     break;
 default:
     VAR_18 = FUNC_4(VAR_11.com_col, VAR_13, VAR_3);
     do {
  FUNC_0(1);
  *VAR_3 = *VAR_1++;
  if (VAR_1 >= VAR_0)
      FUNC_6();
  if (*VAR_3 == ' ' || *VAR_3 == '\t')
      VAR_20 = VAR_3;
  ++VAR_3;
  VAR_18++;
     } while (!FUNC_7("*\n\r\b\t", *VAR_1, 6) &&
  (VAR_18 <= VAR_19 || !VAR_20));
     VAR_11.last_nl = 0;
     if (VAR_18 > VAR_19 && !VAR_11.box_com && VAR_3[-1] > ' ') {



  if (VAR_20 == ((void*)0)) {
      FUNC_5();
      if (!VAR_11.box_com && VAR_9.star_comment_cont)
   *VAR_3++ = ' ', *VAR_3++ = '*', *VAR_3++ = ' ';
      break;
  }
  *VAR_3 = '\0';
  VAR_3 = VAR_20;
  FUNC_5();
  if (!VAR_11.box_com && VAR_9.star_comment_cont)
      *VAR_3++ = ' ', *VAR_3++ = '*', *VAR_3++ = ' ';
  for (VAR_21 = VAR_20 + 1; *VAR_21 == ' ' || *VAR_21 == '\t';
      VAR_21++)
   ;
  VAR_20 = ((void*)0);





  while (*VAR_21 != '\0') {
      if (*VAR_21 == ' ' || *VAR_21 == '\t')
   VAR_20 = VAR_3;
      *VAR_3++ = *VAR_21++;
  }
     }
     break;
 }
    }
}
