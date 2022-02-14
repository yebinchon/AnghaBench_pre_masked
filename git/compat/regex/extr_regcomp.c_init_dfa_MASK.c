
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wint_t ;
struct re_state_table_entry {int dummy; } ;
typedef int reg_errcode_t ;
struct TYPE_4__ {size_t nodes_alloc; unsigned int state_hash_mask; int mb_cur_max; int is_utf8; int map_notascii; int* sb_char; int * state_table; int * nodes; int str_tree_storage_idx; } ;
typedef TYPE_1__ re_dfa_t ;
typedef void* re_bitset_ptr_t ;
typedef int bitset_word_t ;
typedef int bitset_t ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int,int) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,char,int) ;
 char* FUNC_8 (int ) ;
 int * FUNC_9 (int ,size_t) ;
 int VAR_13 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 int * VAR_14 ;

__attribute__((used)) static reg_errcode_t
FUNC_13 (re_dfa_t *VAR_15, size_t VAR_16)
{
  unsigned int VAR_17;

  char *VAR_18;


  FUNC_7 (VAR_15, '\0', sizeof (re_dfa_t));


  VAR_15->str_tree_storage_idx = VAR_0;


  if (VAR_16 == VAR_9)
    return VAR_7;

  VAR_15->nodes_alloc = VAR_16 + 1;
  VAR_15->nodes = FUNC_9 (VAR_13, VAR_15->nodes_alloc);


  for (VAR_17 = 1; ; VAR_17 <<= 1)
    if (VAR_17 > VAR_16)
      break;

  VAR_15->state_table = FUNC_4 (sizeof (struct re_state_table_entry), VAR_17);
  VAR_15->state_hash_mask = VAR_17 - 1;

  VAR_15->mb_cur_max = VAR_6;
  VAR_18 = FUNC_5 ("LC_ALL");
  if (VAR_18 == ((void*)0) || VAR_18[0] == '\0')
    VAR_18 = FUNC_5 ("LC_CTYPE");
  if (VAR_18 == ((void*)0) || VAR_18[0] == '\0')
    VAR_18 = FUNC_5 ("LANG");
  if (VAR_18 == ((void*)0))
    VAR_18 = "";
  else if (FUNC_11 (VAR_18, '.') != ((void*)0))
    VAR_18 = FUNC_11 (VAR_18, '.') + 1;
  if ( (VAR_18[0] == 'U' || VAR_18[0] == 'u')
      && (VAR_18[1] == 'T' || VAR_18[1] == 't')
      && (VAR_18[2] == 'F' || VAR_18[2] == 'f')
      && (VAR_18[3] == '-'
          ? VAR_18[4] == '8' && VAR_18[5] == '\0'
          : VAR_18[3] == '8' && VAR_18[4] == '\0'))
    VAR_15->is_utf8 = 1;




  VAR_15->map_notascii = 0;
  if (FUNC_0 (VAR_15->nodes == ((void*)0) || VAR_15->state_table == ((void*)0), 0))
    return VAR_7;
  return VAR_8;
}
