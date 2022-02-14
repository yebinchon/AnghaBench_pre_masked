
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct value_buffer {int (* output_int ) (struct value_buffer*,int) ;int (* output_char ) (struct value_buffer*,char) ;int (* output_item_id ) (struct value_buffer*,int ) ;int (* output_hash ) (struct value_buffer*,int ) ;} ;
struct connection {int dummy; } ;
struct TYPE_3__ {int item_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (char*,int*,int*,int) ;
 int VAR_6 ;
 int FUNC_4 (struct connection*,char const*,int,int,char*) ;
 int VAR_7 ;
 int FUNC_5 (struct value_buffer*,int) ;
 int FUNC_6 (struct value_buffer*,int ) ;
 int FUNC_7 (struct value_buffer*,char) ;
 int FUNC_8 (struct value_buffer*,int) ;
 int FUNC_9 (struct value_buffer*,char) ;
 int FUNC_10 (struct value_buffer*,int ) ;
 int FUNC_11 (struct value_buffer*,char) ;
 int FUNC_12 (struct value_buffer*,int) ;
 int FUNC_13 (struct value_buffer*,char) ;
 int FUNC_14 (struct value_buffer*,int ) ;
 int FUNC_15 (struct value_buffer*,int) ;
 int FUNC_16 (struct value_buffer*,char) ;
 int FUNC_17 (struct value_buffer*) ;
 int FUNC_18 (struct value_buffer*,struct connection*,char const*,int,int,int) ;
 int FUNC_19 (struct value_buffer*) ;
 int FUNC_20 (int,char*,int,char const*,int) ;

int FUNC_21 (struct connection *VAR_8, const char *VAR_9, int VAR_10, int VAR_11) {
  int VAR_12, VAR_13, VAR_14 = 0;

  char *VAR_15 = FUNC_3 ((char *) VAR_9, &VAR_13, &VAR_14, 1);

  if (VAR_14 < 0) {
    FUNC_20 (1, "parse_relevance_search_query (%.*s) returns error code %d.\n", VAR_10, VAR_9, VAR_14);
    return FUNC_4 (VAR_8, VAR_9, VAR_10, VAR_11, VAR_15);
  }

  VAR_7++;
  VAR_6++;

  int VAR_16 = FUNC_1 (VAR_9, VAR_10);

  struct value_buffer VAR_17;
  if (!FUNC_18 (&VAR_17, VAR_8, VAR_9 - VAR_11, VAR_10 + VAR_11, VAR_13, 64)) {
    return 0;
  }
  if (VAR_0) {
    FUNC_0 (VAR_1 > 0);
    VAR_17.output_int (&VAR_17, VAR_5);
    for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
      if (!FUNC_17 (&VAR_17) ) { return -1; }
      VAR_17.output_char (&VAR_17, ',');
      VAR_17.output_item_id (&VAR_17, VAR_2[VAR_12]->item_id);
      VAR_17.output_char (&VAR_17, ',');
      VAR_17.output_int (&VAR_17, VAR_3[VAR_12]);
      VAR_17.output_char (&VAR_17, ',');
      VAR_17.output_hash (&VAR_17, FUNC_2 (VAR_2[VAR_12]));
    }
    return FUNC_19 (&VAR_17);
  }

  VAR_17.output_int (&VAR_17, VAR_16);
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
    if (!FUNC_17 (&VAR_17) ) { return -1; }
    VAR_17.output_char (&VAR_17, ',');
    VAR_17.output_item_id (&VAR_17, VAR_2[VAR_12]->item_id);
    VAR_17.output_char (&VAR_17, ',');
    VAR_17.output_int (&VAR_17, VAR_3[VAR_12]);
  }
  return FUNC_19 (&VAR_17);
}
