
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct re_pattern_buffer {char* fastmap; int fastmap_accurate; scalar_t__ buffer; } ;
struct TYPE_2__ {scalar_t__ init_state; scalar_t__ init_state_word; scalar_t__ init_state_nl; scalar_t__ init_state_begbuf; } ;
typedef TYPE_1__ re_dfa_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (struct re_pattern_buffer*,scalar_t__,char*) ;

int
FUNC_2 (struct re_pattern_buffer *VAR_1)
{
  re_dfa_t *VAR_2 = (re_dfa_t *) VAR_1->buffer;
  char *VAR_3 = VAR_1->fastmap;

  FUNC_0 (VAR_3, '\0', sizeof (char) * VAR_0);
  FUNC_1 (VAR_1, VAR_2->init_state, VAR_3);
  if (VAR_2->init_state != VAR_2->init_state_word)
    FUNC_1 (VAR_1, VAR_2->init_state_word, VAR_3);
  if (VAR_2->init_state != VAR_2->init_state_nl)
    FUNC_1 (VAR_1, VAR_2->init_state_nl, VAR_3);
  if (VAR_2->init_state != VAR_2->init_state_begbuf)
    FUNC_1 (VAR_1, VAR_2->init_state_begbuf, VAR_3);
  VAR_1->fastmap_accurate = 1;
  return 0;
}
