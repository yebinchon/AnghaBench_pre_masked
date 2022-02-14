
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct value_buffer {int (* output_int ) (struct value_buffer*,int) ;int (* output_char ) (struct value_buffer*,char) ;int (* output_item_id ) (struct value_buffer*,int ) ;int (* output_hash ) (struct value_buffer*,int ) ;} ;
struct search_query_heap_en {double cpu_time; int res; scalar_t__* query; } ;
struct connection {int dummy; } ;
struct TYPE_5__ {double cpu_time; } ;
struct TYPE_4__ {int item_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_2__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 double FUNC_4 () ;
 scalar_t__* VAR_11 ;
 int FUNC_5 (scalar_t__*,char const*,int) ;
 char* FUNC_6 (char*,int *,int*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct connection*,char const*,char*,int ) ;
 int VAR_12 ;
 int FUNC_9 (struct search_query_heap_en*) ;
 int FUNC_10 (char*,char*,char*) ;
 int VAR_13 ;
 int FUNC_11 (scalar_t__*,char const*) ;
 scalar_t__ FUNC_12 (char const*,char*,int) ;
 int FUNC_13 (struct value_buffer*,int) ;
 int FUNC_14 (struct value_buffer*,int ) ;
 int FUNC_15 (struct value_buffer*,char) ;
 int FUNC_16 (struct value_buffer*,int) ;
 int FUNC_17 (struct value_buffer*,char) ;
 int FUNC_18 (struct value_buffer*,int ) ;
 int FUNC_19 (struct value_buffer*,char) ;
 int FUNC_20 (struct value_buffer*,int) ;
 int FUNC_21 (struct value_buffer*,char) ;
 int FUNC_22 (struct value_buffer*,int ) ;
 int FUNC_23 (struct value_buffer*,int) ;
 int FUNC_24 (struct value_buffer*,char) ;
 int FUNC_25 (struct value_buffer*) ;
 int FUNC_26 (struct value_buffer*,struct connection*,char const*,int,int ,int) ;
 int FUNC_27 (struct value_buffer*) ;
 scalar_t__ VAR_14 ;
 int FUNC_28 (int,char*,...) ;
 scalar_t__* FUNC_29 (int) ;

int FUNC_30 (struct connection *VAR_15, const char *VAR_16, int VAR_17, int VAR_18) {
  static char VAR_19[2048];
  int VAR_20 = -1;
  int VAR_21;

  if (FUNC_12 (VAR_16, "search", 6)) {
    return 0;
  }

  if (VAR_14 > 0) {
    FUNC_2 (VAR_13, "got: %s\n", VAR_16);
  }

  VAR_21 = 0;
  int VAR_22;
  char *VAR_23 = FUNC_6 ((char*) VAR_16, &VAR_3, &VAR_22);

  if (VAR_22 < 0) {
    FUNC_28 (1, "parse_query (%.*s) returns error code %d.\n", VAR_17, VAR_16, VAR_22);
    FUNC_28 (1, "ERROR near '%.256s'\n", VAR_23);
    return FUNC_8 (VAR_15, VAR_16 - VAR_18, VAR_19, FUNC_10 (VAR_19, "ERROR near '%.256s'\n", VAR_23));
  }

  VAR_6 = 0;
  VAR_12++;

  if (VAR_17 < VAR_0) {
    FUNC_5 (VAR_11, VAR_16, VAR_17);
    VAR_11[VAR_17] = 0;
  } else {
    FUNC_11 (VAR_11, "TOO LONG QUERY");
  }

  double VAR_24 = -FUNC_4 ();
  VAR_21 = FUNC_7();
  VAR_24 += FUNC_4 ();

  if (VAR_10 < VAR_8 || VAR_9[1].cpu_time < VAR_24) {
    struct search_query_heap_en VAR_25;
    VAR_25.query = FUNC_29 (VAR_17+1);
    FUNC_11 (VAR_25.query, VAR_16);
    VAR_25.cpu_time = VAR_24;
    VAR_25.res = VAR_21;
    FUNC_9 (&VAR_25);
  }
  if (VAR_14 > 0) {
    FUNC_2 (VAR_13, "result = %d\n", VAR_21);
  }

  struct value_buffer VAR_26;
  if (!FUNC_26 (&VAR_26, VAR_15, VAR_16 - VAR_18, VAR_17 + VAR_18, VAR_3, 64)) {
    return -1;
  }
  if (VAR_1) {
    FUNC_0 (VAR_2 > 0);
    VAR_26.output_int (&VAR_26, VAR_7);
    for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++) {
      if (!FUNC_25 (&VAR_26) ) { return -1; }
      VAR_26.output_char (&VAR_26, ',');
      VAR_26.output_item_id (&VAR_26, VAR_4[VAR_20]->item_id);
      VAR_26.output_char (&VAR_26, ',');
      VAR_26.output_int (&VAR_26, FUNC_1 (VAR_5[VAR_20]));
      VAR_26.output_char (&VAR_26, ',');
      VAR_26.output_hash (&VAR_26, FUNC_3 (VAR_4[VAR_20]));
    }
    return FUNC_27 (&VAR_26);
  }

  VAR_26.output_int (&VAR_26, VAR_21);
  for (VAR_20 = 0; VAR_20 < VAR_6; VAR_20++) {
    if (!FUNC_25 (&VAR_26) ) { return -1; }
    VAR_26.output_char (&VAR_26, ',');
    VAR_26.output_item_id (&VAR_26, VAR_4[VAR_20]->item_id);
    VAR_26.output_char (&VAR_26, ',');
    VAR_26.output_int (&VAR_26, FUNC_1 (VAR_5[VAR_20]));
  }
  return FUNC_27 (&VAR_26);
}
