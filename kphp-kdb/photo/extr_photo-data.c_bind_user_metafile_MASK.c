
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* metafile; int albums_n; int metafile_len; int* albums_id; int* albums_offset; int album_by_photo; int d; } ;
typedef TYPE_1__ user ;
struct TYPE_7__ {int user_cnt; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,unsigned int*,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,char*,int,TYPE_1__*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_6 (int *,char*,int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

void FUNC_7 (user *VAR_5) {
  if (VAR_4 > 2) {
    FUNC_5 (VAR_2, "bind user metafile local id = %d (%p)\n", (int)(VAR_5 - VAR_3), VAR_5);
  }
  FUNC_4 ("bind user metafile local id = %d (%p)\n", (int)(VAR_5 - VAR_3), VAR_5);
  int VAR_6 = (int)(VAR_5 - VAR_3);

  if (VAR_5->metafile == ((void*)0) || VAR_5->metafile == VAR_0) {
    FUNC_1 (VAR_5->metafile != ((void*)0));
    FUNC_4 ("empty metafile found\n");

    FUNC_3 (&VAR_5->d, VAR_0, sizeof (int));
    FUNC_6 (&VAR_5->album_by_photo, ((void*)0), 0);
    VAR_5->albums_n = 0;

    return;
  }

  FUNC_1 (VAR_5->metafile_len >= (int)sizeof (int));
  unsigned int VAR_7;


  FUNC_1 (1 <= VAR_6 && VAR_6 <= VAR_1.user_cnt);





  char *VAR_8 = VAR_5->metafile;
  int VAR_9 = VAR_5->metafile_len;

  FUNC_0 (VAR_8, VAR_7);

  FUNC_2 (VAR_8, VAR_5->metafile_len - sizeof (int), &VAR_7, 1);


  FUNC_0 (VAR_8, VAR_9);

  FUNC_3 (&VAR_5->d, VAR_8, VAR_9);
  VAR_8 += VAR_9;

  FUNC_0 (VAR_8, VAR_5->albums_n);

  VAR_5->albums_id = (int *)VAR_8;
  VAR_8 += sizeof (int) * VAR_5->albums_n;
  VAR_5->albums_offset = (int *)VAR_8;
  VAR_8 += sizeof (int) * (VAR_5->albums_n + 1);

  VAR_8 = VAR_5->metafile + VAR_5->albums_offset[VAR_5->albums_n];

  FUNC_0 (VAR_8, VAR_9);

  FUNC_6 (&VAR_5->album_by_photo, VAR_8, VAR_9);
  VAR_8 += VAR_9;

  FUNC_1 (VAR_8 <= VAR_5->metafile + VAR_5->metafile_len);
}
