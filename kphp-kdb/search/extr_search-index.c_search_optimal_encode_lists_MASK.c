
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct search_index_word {int dummy; } ;
struct TYPE_7__ {int crc32_data; } ;
struct TYPE_6__ {int word_list_compression_methods; } ;
struct TYPE_5__ {scalar_t__ file_offset; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (int*,int ) ;
 int FUNC_7 (int*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void FUNC_8 (void) {
  int VAR_13[2];
  FUNC_7 (VAR_13);
  VAR_9 = 0;
  FUNC_3 (VAR_1.word_list_compression_methods, VAR_13, 8);

  FUNC_2 (VAR_6[0], VAR_12, VAR_2);
  int VAR_14 = FUNC_6 (VAR_13, 0);
  VAR_0.crc32_data = ~VAR_7;
  FUNC_4 (VAR_3+VAR_14, 0, sizeof (struct search_index_word));
  VAR_3[VAR_14].file_offset = VAR_5;
  FUNC_0 ();
  if (VAR_11 > 0) {
    FUNC_1 ("wrote %lld codes bytes in %d lists\n",
      VAR_5 - VAR_12, VAR_9);
    if (VAR_4 < 0) {
      FUNC_1 ("wrote %lld(%.6lf%%) interpolative redundant bits.\n", VAR_10, FUNC_5 (VAR_10, VAR_8));
    }
  }
}
