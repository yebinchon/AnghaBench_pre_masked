
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct query_nodes_list {TYPE_1__* v; struct query_nodes_list* next; } ;
struct TYPE_8__ {scalar_t__ op; scalar_t__ word; struct TYPE_8__* right; struct TYPE_8__* left; int frequency; struct query_nodes_list* head; } ;
typedef TYPE_1__ query_node_t ;
typedef int a ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__**,int,int,int ) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_1__**,int) ;
 TYPE_1__** FUNC_4 (int) ;

__attribute__((used)) static query_node_t *FUNC_5 (query_node_t *VAR_9) {
  if (!VAR_9) { return 0; }
  if (VAR_9->op == VAR_3 || VAR_9->op == VAR_4) {
    int VAR_10 = (VAR_9->op == VAR_3) ? VAR_2 : VAR_5;
    struct query_nodes_list *VAR_11;
    int VAR_12, VAR_13 = 0;
    for (VAR_11 = VAR_9->head; VAR_11 != 0; VAR_11 = VAR_11->next) {
      VAR_11->v = FUNC_5 (VAR_11->v);
      VAR_13++;
    }
    query_node_t **VAR_14 = FUNC_4 (sizeof (query_node_t *) * VAR_13);
    VAR_13 = 0;
    for (VAR_11 = VAR_9->head; VAR_11 != 0; VAR_11 = VAR_11->next) {
      VAR_14[VAR_13++] = VAR_11->v;
    }
    for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
      if (VAR_14[VAR_12]->op == VAR_6) {
        VAR_14[VAR_12]->frequency = FUNC_1 (VAR_14[VAR_12]->word);
      }
    }
    FUNC_2 (VAR_14, VAR_13, sizeof (VAR_14[0]), VAR_1);
    int VAR_15 = 0;

    for (VAR_12 = 1; VAR_12 < VAR_13; VAR_12++) {
      if (VAR_14[VAR_12]->op != VAR_6 || VAR_14[VAR_12]->word != VAR_14[VAR_15]->word) {
        VAR_14[++VAR_15] = VAR_14[VAR_12];
      }
    }
    query_node_t *VAR_16 = VAR_14[0];
    for (VAR_12 = 1; VAR_12 <= VAR_15; VAR_12++) {
      FUNC_0 (VAR_8 < VAR_0);
      query_node_t *VAR_17 = &VAR_7[VAR_8++];
      VAR_17->op = VAR_10;
      VAR_17->left = VAR_16;
      VAR_17->right = VAR_14[VAR_12];
      VAR_16 = VAR_17;
    }
    FUNC_3 (VAR_14, sizeof (query_node_t *) * VAR_13);
    return VAR_16;
  } else {
    VAR_9->left = FUNC_5 (VAR_9->left);
    VAR_9->right = FUNC_5 (VAR_9->right);
    return VAR_9;
  }
}
