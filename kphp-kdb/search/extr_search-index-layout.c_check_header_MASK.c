
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct search_index_header {scalar_t__ command_line_switches_flags; scalar_t__ stemmer_version; scalar_t__ word_split_version; scalar_t__ listcomp_version; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_3 (struct search_index_header *VAR_3) {
  if (VAR_3->command_line_switches_flags != FUNC_1 ()) {
    FUNC_2 ("Index header command line switches not equal given command line switches. Index flags %08x, current flags %08x\n", VAR_3->command_line_switches_flags, FUNC_1 ());
    return 0;
  }
  if (VAR_3->stemmer_version != VAR_1) {
    FUNC_2 ("Header stemmer version = %d, stemmer_version = %d\n", VAR_3->stemmer_version, VAR_1);
    return 0;
  }
  if (VAR_3->word_split_version != VAR_2) {
    FUNC_2 ("Header word split version = %d, word split version = %d\n", VAR_3->word_split_version, VAR_2);
    return 0;
  }
  if (!FUNC_0 (VAR_3->listcomp_version)) {
    FUNC_2 ("Header listcomp version = %x, listcomp version = %x\n", VAR_3->listcomp_version, VAR_0);
    return 0;
  }
  return 1;
}
