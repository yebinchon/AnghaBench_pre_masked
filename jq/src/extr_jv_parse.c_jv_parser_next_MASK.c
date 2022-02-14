
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {int eof; char* curr_buf; int bom_strip_position; int flags; scalar_t__ st; scalar_t__ curr_buf_pos; scalar_t__ curr_buf_length; scalar_t__ stacklen; scalar_t__ stackpos; scalar_t__ column; int line; int last_ch_was_ws; int next; int path; scalar_t__ curr_buf_is_partial; } ;
typedef scalar_t__ presult ;
typedef int jv ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct jv_parser*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct jv_parser*,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_11 (struct jv_parser*) ;
 scalar_t__ FUNC_12 (struct jv_parser*,char,int *) ;
 scalar_t__ FUNC_13 (struct jv_parser*,int *) ;

jv FUNC_14(struct jv_parser* VAR_6) {
  if (VAR_6->eof)
    return FUNC_6();
  if (!VAR_6->curr_buf)
    return FUNC_6();
  if (VAR_6->bom_strip_position == 0xff) {
    if (!(VAR_6->flags & VAR_3))
      return FUNC_7(FUNC_9("Malformed BOM"));
    VAR_6->st =VAR_2;
    FUNC_11(VAR_6);
  }
  jv VAR_7 = FUNC_6();
  if ((VAR_6->flags & VAR_4) && FUNC_13(VAR_6, &VAR_7))
    return VAR_7;
  char VAR_8;
  presult VAR_9 = 0;
  while (!VAR_9 && VAR_6->curr_buf_pos < VAR_6->curr_buf_length) {
    VAR_8 = VAR_6->curr_buf[VAR_6->curr_buf_pos++];
    if (VAR_6->st == VAR_2) {
      if (VAR_8 == '\n') {
        VAR_6->line++;
        VAR_6->column = 0;
      } else {
        VAR_6->column++;
      }
      if (VAR_8 == '\036')
        VAR_6->st = VAR_1;
      continue;
    }
    VAR_9 = FUNC_12(VAR_6, VAR_8, &VAR_7);
  }
  if (VAR_9 == VAR_5) {
    return VAR_7;
  } else if (VAR_9) {
    FUNC_4(VAR_7);
    if (VAR_8 != '\036' && (VAR_6->flags & VAR_3)) {

      VAR_6->st = VAR_2;
      VAR_7 = FUNC_10(VAR_6, "%s at line %d, column %d (need RS to resync)", VAR_9, VAR_6->line, VAR_6->column);
      FUNC_11(VAR_6);
      return VAR_7;
    }
    VAR_7 = FUNC_10(VAR_6, "%s at line %d, column %d", VAR_9, VAR_6->line, VAR_6->column);
    FUNC_11(VAR_6);
    if (!(VAR_6->flags & VAR_3)) {


      VAR_6->curr_buf = 0;
      VAR_6->curr_buf_pos = 0;
    }
    return VAR_7;
  } else if (VAR_6->curr_buf_is_partial) {
    FUNC_1(VAR_6->curr_buf_pos == VAR_6->curr_buf_length);

    return FUNC_6();
  } else {

    VAR_6->eof = 1;
    FUNC_1(VAR_6->curr_buf_pos == VAR_6->curr_buf_length);
    FUNC_4(VAR_7);
    if (VAR_6->st == VAR_2)
      return FUNC_10(VAR_6, "Unfinished abandoned text at EOF at line %d, column %d", VAR_6->line, VAR_6->column);
    if (VAR_6->st != VAR_1) {
      VAR_7 = FUNC_10(VAR_6, "Unfinished string at EOF at line %d, column %d", VAR_6->line, VAR_6->column);
      FUNC_11(VAR_6);
      VAR_6->st = VAR_2;
      return VAR_7;
    }
    if ((VAR_9 = FUNC_2(VAR_6))) {
      VAR_7 = FUNC_10(VAR_6, "%s at EOF at line %d, column %d", VAR_9, VAR_6->line, VAR_6->column);
      FUNC_11(VAR_6);
      VAR_6->st = VAR_2;
      return VAR_7;
    }
    if (((VAR_6->flags & VAR_4) && VAR_6->stacklen != 0) ||
        (!(VAR_6->flags & VAR_4) && VAR_6->stackpos != 0)) {
      VAR_7 = FUNC_10(VAR_6, "Unfinished JSON term at EOF at line %d, column %d", VAR_6->line, VAR_6->column);
      FUNC_11(VAR_6);
      VAR_6->st = VAR_2;
      return VAR_7;
    }


    if ((VAR_6->flags & VAR_4) && FUNC_8(VAR_6->next)) {
      VAR_7 = FUNC_0(FUNC_3(VAR_6->path), VAR_6->next);
    } else {
      VAR_7 = VAR_6->next;
    }
    VAR_6->next = FUNC_6();
    if ((VAR_6->flags & VAR_3) && !VAR_6->last_ch_was_ws && FUNC_5(VAR_7) == VAR_0) {
      FUNC_4(VAR_7);
      return FUNC_10(VAR_6, "Potentially truncated top-level numeric value at EOF at line %d, column %d", VAR_6->line, VAR_6->column);
    }
    return VAR_7;
  }
}
