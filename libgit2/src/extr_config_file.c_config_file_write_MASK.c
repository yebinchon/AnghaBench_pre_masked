
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int write_data ;
struct TYPE_14__ {size_t asize; int size; int ptr; } ;
struct write_data {char* orig_section; char* section; char* orig_name; char* name; char const* value; TYPE_2__ buffered_comment; int const* preg; TYPE_2__* buf; } ;
typedef int git_regexp ;
typedef int git_filebuf ;
typedef int git_config_parser ;
typedef TYPE_2__ git_buf ;
struct TYPE_13__ {int path; } ;
struct TYPE_15__ {int parent; TYPE_2__ locked_content; scalar_t__ locked; TYPE_1__ file; } ;
typedef TYPE_3__ config_file_backend ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int) ;
 int FUNC_4 (TYPE_2__*,int ,size_t) ;
 char* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (int *,int ,int ,int ,int ,struct write_data*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int ,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ,int ) ;
 int FUNC_16 (int *,char*,int ) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (struct write_data*,int ,int) ;
 char* FUNC_19 (char const*,char) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_20(config_file_backend *VAR_10, const char *VAR_11, const char *VAR_12, const git_regexp *VAR_13, const char* VAR_14)

{
 char *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17, *VAR_18, *VAR_19;
 git_buf VAR_20 = VAR_0, VAR_21 = VAR_0;
 git_config_parser VAR_22 = VAR_2;
 git_filebuf VAR_23 = VAR_5;
 struct write_data VAR_24;
 int VAR_25;

 FUNC_18(&VAR_24, 0, sizeof(VAR_24));

 if (VAR_10->locked) {
  VAR_25 = FUNC_9(&VAR_21, FUNC_5(&VAR_10->locked_content) == ((void*)0) ? "" : FUNC_5(&VAR_10->locked_content));
 } else {
  if ((VAR_25 = FUNC_15(&VAR_23, VAR_10->file.path, VAR_4,
           VAR_1)) < 0)
   goto done;


  VAR_25 = FUNC_17(&VAR_21, VAR_10->file.path);
 }
 if (VAR_25 < 0 && VAR_25 != VAR_3)
  goto done;

 if ((FUNC_12(&VAR_22, VAR_10->file.path, VAR_21.ptr, VAR_21.size)) < 0)
  goto done;

 VAR_19 = FUNC_19(VAR_12, '.');
 VAR_18 = VAR_19 + 1;
 VAR_16 = FUNC_3(VAR_12, VAR_19 - VAR_12);
 FUNC_0(VAR_16);

 VAR_19 = FUNC_19(VAR_11, '.');
 VAR_17 = VAR_19 + 1;
 VAR_15 = FUNC_3(VAR_11, VAR_19 - VAR_11);
 FUNC_0(VAR_15);

 VAR_24.buf = &VAR_20;
 VAR_24.orig_section = VAR_15;
 VAR_24.section = VAR_16;
 VAR_24.orig_name = VAR_17;
 VAR_24.name = VAR_18;
 VAR_24.preg = VAR_13;
 VAR_24.value = VAR_14;

 if ((VAR_25 = FUNC_10(&VAR_22, VAR_8, VAR_9,
          VAR_6, VAR_7, &VAR_24)) < 0)
  goto done;

 if (VAR_10->locked) {
  size_t VAR_26 = VAR_20.asize;

  FUNC_7(&VAR_10->locked_content);
  FUNC_4(&VAR_10->locked_content, FUNC_6(&VAR_20), VAR_26);
 } else {
  FUNC_16(&VAR_23, FUNC_5(&VAR_20), FUNC_8(&VAR_20));

  if ((VAR_25 = FUNC_14(&VAR_23)) < 0)
   goto done;

  if ((VAR_25 = FUNC_1(&VAR_10->parent, VAR_20.ptr, VAR_20.size)) < 0)
   goto done;
 }

done:
 FUNC_2(VAR_16);
 FUNC_2(VAR_15);
 FUNC_7(&VAR_24.buffered_comment);
 FUNC_7(&VAR_20);
 FUNC_7(&VAR_21);
 FUNC_13(&VAR_23);
 FUNC_11(&VAR_22);

 return VAR_25;
}
