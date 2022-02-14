
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct searchy_index_word {int dummy; } ;
typedef scalar_t__ hash_t ;
struct TYPE_11__ {int crc32_data; } ;
struct TYPE_10__ {int words; } ;
struct TYPE_9__ {scalar_t__ word; scalar_t__ file_offset; } ;
struct TYPE_8__ {scalar_t__ word; } ;


 TYPE_7__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int) ;
 double VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;
 int * VAR_8 ;
 int FUNC_2 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int,TYPE_2__*) ;
 long long VAR_12 ;
 long long VAR_13 ;
 long long VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int,char*,int,...) ;
 scalar_t__ VAR_17 ;
 int FUNC_7 (int ,long long) ;

__attribute__((used)) static int FUNC_8 (void) {
  FUNC_1 ();
  FUNC_3 (VAR_8[0], VAR_17, VAR_4);
  int VAR_18 = 0, VAR_19 = 0, VAR_20;
  for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20 = VAR_19) {
    hash_t VAR_21 = VAR_2[VAR_20].word;
    for (VAR_19 = VAR_20 + 1; VAR_19 < VAR_3 && VAR_2[VAR_19].word == VAR_21; VAR_19++) {}
    VAR_5[VAR_18].word = VAR_2[VAR_20].word;
    FUNC_5 (VAR_2 + VAR_20, VAR_19 - VAR_20, VAR_5 + VAR_18);
    VAR_18++;
  }
  FUNC_0 (VAR_18 == VAR_1.words);

  VAR_0.crc32_data = ~VAR_9;
  FUNC_4 (VAR_5+VAR_18, 0, sizeof (struct searchy_index_word));
  VAR_5[VAR_18].file_offset = VAR_7;

  FUNC_7 (VAR_10, 4LL * VAR_14 + 4);
  FUNC_6 (1, "wrote %d item positions bytes\n", VAR_18);

  FUNC_2 ();
  long long VAR_22 = VAR_13 + VAR_12;
  FUNC_6 (1, "total data bits %lld, coordinates (%.6lf%%)\n",
    VAR_22, (100.0 * VAR_6) / VAR_22);
  FUNC_6 (1, "wrote %lld codes bytes in %d lists\n", VAR_7 - VAR_17, VAR_11);
  FUNC_6 (1, "%d terms (%lld bits) and %d tags (%lld bits)\n",
    VAR_16, VAR_13, VAR_15, VAR_12);
  return VAR_18;
}
