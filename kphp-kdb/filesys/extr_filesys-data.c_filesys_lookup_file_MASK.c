
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filesys_directory_node {int inode; int mode; struct filesys_directory_node* head; struct filesys_directory_node* next; int * name; struct filesys_directory_node* parent; int modification_time; } ;
typedef enum filesys_lookup_file_type { ____Placeholder_filesys_lookup_file_type } filesys_lookup_file_type ;


 int VAR_0 ;
 struct filesys_directory_node* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct filesys_directory_node*,int) ;
 int FUNC_2 (struct filesys_directory_node*) ;




 int FUNC_3 (int *,char const*,int) ;
 int VAR_3 ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (char const*) ;
 int VAR_4 ;
 int FUNC_7 (int,char*,char const*,int) ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (int) ;

struct filesys_directory_node *FUNC_10 (const char *VAR_5, enum filesys_lookup_file_type VAR_6) {

  FUNC_7 (3, "filesys_lookup_file (%s, %d)\n", VAR_5, VAR_6);

  if (*VAR_5 != '/') {

    return ((void*)0);
  }
  VAR_5++;
  if (VAR_1 == ((void*)0)) {
    VAR_4++;
    VAR_1 = FUNC_9 (sizeof (struct filesys_directory_node));
    VAR_1->inode = -1;
    VAR_1->mode = 0777 | VAR_2;
    VAR_1->name = FUNC_9 (1);
    VAR_1->modification_time = VAR_3;
  }

  if (!*VAR_5) {
    return VAR_1;
  }

  struct filesys_directory_node *VAR_7 = VAR_1;
  while (1) {
    const char *VAR_8 = FUNC_4 (VAR_5, '/');
    int VAR_9 = (VAR_8 == ((void*)0)) ? FUNC_6 (VAR_5) : (VAR_8 - VAR_5);
    if (VAR_9 > VAR_0) {
      return ((void*)0);
    }
    FUNC_0 (VAR_7 != ((void*)0));
    struct filesys_directory_node **VAR_10 = &VAR_7->head;
    int VAR_11 = 0;
    while (*VAR_10 != ((void*)0)) {
      struct filesys_directory_node *VAR_12 = *VAR_10;
      if (!FUNC_3 (VAR_12->name, VAR_5, VAR_9) && !VAR_12->name[VAR_9]) {
        VAR_5 += VAR_9;
        if (!(*VAR_5)) {
          switch (VAR_6) {
            case 129:
              if (VAR_12->inode >= 0 || VAR_12->head != ((void*)0) || FUNC_1 (VAR_12->parent, 2)) {

                return ((void*)0);
              }
              *VAR_10 = VAR_12->next;
              FUNC_2 (VAR_7);
              return VAR_12;
            case 128:
              if (VAR_12->inode < 0 || FUNC_1 (VAR_12->parent, 2)) {
                return ((void*)0);
              }
              *VAR_10 = VAR_12->next;
              FUNC_2 (VAR_7);
              return VAR_12;
            case 130:
              *VAR_10 = VAR_12->next;
              VAR_12->next = VAR_7->head;
              VAR_7->head = VAR_12;
              return VAR_12;
            case 131:
              return ((void*)0);
          }
        }

        *VAR_10 = VAR_12->next;
        VAR_12->next = VAR_7->head;
        VAR_7->head = VAR_12;

        if (VAR_12->inode >= 0) {

          return ((void*)0);
        }
        VAR_5++;
        VAR_7 = VAR_12;
        VAR_11 = 1;
        break;
      }
      VAR_10 = &VAR_12->next;
    }
    if (!VAR_11) {
      if (VAR_6 > 0 && !VAR_5[VAR_9] && VAR_7->inode < 0 && !FUNC_1 (VAR_7, 2)) {
        VAR_4++;
        struct filesys_directory_node *VAR_13 = FUNC_8 (sizeof (struct filesys_directory_node));
        VAR_13->parent = VAR_7;
        VAR_13->name = FUNC_8 (VAR_9 + 1);
        FUNC_5 (VAR_13->name, VAR_5);
        VAR_13->head = ((void*)0);
        VAR_13->next = VAR_7->head;
        VAR_13->inode = -1;
        VAR_7->head = VAR_13;
        FUNC_2 (VAR_13);
        return VAR_13;
      }
      return ((void*)0);
    }
  }
}
