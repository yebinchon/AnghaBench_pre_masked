
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct search_index_hapax_legomena {int dummy; } ;
typedef scalar_t__ hash_t ;
struct TYPE_12__ {int words; int hapax_legomena; int * compression_bytes; } ;
struct TYPE_11__ {unsigned int doc_id_and_priority; scalar_t__ word; } ;
struct TYPE_10__ {scalar_t__ word; } ;
struct TYPE_9__ {scalar_t__ word; unsigned int doc_id; } ;


 TYPE_3__* VAR_0 ;
 TYPE_7__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int * VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int,TYPE_2__*,int const*,int) ;
 int FUNC_5 (int,char*,int,int) ;

__attribute__((used)) static int FUNC_6 (const int VAR_6[2], int VAR_7) {
  FUNC_1 ();
  int VAR_8 = 0, VAR_9, VAR_10, VAR_11 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10 = VAR_9) {
    hash_t VAR_12 = VAR_2[VAR_10].word;
    for (VAR_9 = VAR_10 + 1; VAR_9 < VAR_3 && VAR_2[VAR_9].word == VAR_12; VAR_9++) {}
    if (VAR_9 - VAR_10 > 1) {
      FUNC_0 (VAR_8 < VAR_1.words);
      VAR_4[VAR_8].word = VAR_12;
      FUNC_4 (VAR_2+VAR_10, VAR_9-VAR_10, VAR_4+VAR_8, VAR_6, VAR_7);
      VAR_8++;
    } else {
      if (VAR_11 >= VAR_1.hapax_legomena) { FUNC_5 (1, "h1 = %d, Header.hapax_legomena = %d\n", VAR_11, VAR_1.hapax_legomena); }
      FUNC_0 (VAR_11 < VAR_1.hapax_legomena);
      VAR_0[VAR_11].word = VAR_12;
      VAR_0[VAR_11].doc_id_and_priority = VAR_2[VAR_10].doc_id;
      if (FUNC_2 (VAR_2 + VAR_10)) {
        VAR_0[VAR_11].doc_id_and_priority |= (1U << 31);
      }
      VAR_11++;
    }
  }
  FUNC_0 (VAR_8 == VAR_1.words);
  FUNC_0 (VAR_11 == VAR_1.hapax_legomena);
  FUNC_3 (VAR_0+VAR_11, 0, sizeof (struct search_index_hapax_legomena));
  for (VAR_10=0;VAR_10<2;VAR_10++) {
    VAR_1.compression_bytes[2*VAR_6[VAR_10]+VAR_10] = VAR_5[VAR_10];
  }
  return VAR_8;
}
