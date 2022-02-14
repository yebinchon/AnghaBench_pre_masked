
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int temp ;
struct strbuf_expand_dict_entry {char* placeholder; char* value; } ;
struct strbuf {char* buf; } ;
struct stat {int st_size; } ;
struct ll_merge_options {int dummy; } ;
struct ll_merge_driver {int * cmdline; int name; } ;
typedef int mmfile_t ;
struct TYPE_3__ {int size; int * ptr; } ;
typedef TYPE_1__ mmbuffer_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_1 (struct ll_merge_options const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int,int *,int ) ;
 int FUNC_8 (char const**,int ) ;
 int FUNC_9 (struct strbuf*,char const*) ;
 int FUNC_10 (struct strbuf*,int *,int ,struct strbuf_expand_dict_entry**) ;
 int VAR_3 ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (char*) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_15(const struct ll_merge_driver *VAR_4,
   mmbuffer_t *VAR_5,
   const char *VAR_6,
   mmfile_t *VAR_7, const char *VAR_8,
   mmfile_t *VAR_9, const char *VAR_10,
   mmfile_t *VAR_11, const char *VAR_12,
   const struct ll_merge_options *VAR_13,
   int VAR_14)
{
 char VAR_15[4][50];
 struct strbuf VAR_16 = VAR_2;
 struct strbuf_expand_dict_entry VAR_17[6];
 struct strbuf VAR_18 = VAR_2;
 const char *VAR_19[] = { ((void*)0), ((void*)0) };
 int VAR_20, VAR_21, VAR_22;
 struct stat VAR_23;
 FUNC_1(VAR_13);

 FUNC_9(&VAR_18, VAR_6);
 VAR_17[0].placeholder = "O"; VAR_17[0].value = VAR_15[0];
 VAR_17[1].placeholder = "A"; VAR_17[1].value = VAR_15[1];
 VAR_17[2].placeholder = "B"; VAR_17[2].value = VAR_15[2];
 VAR_17[3].placeholder = "L"; VAR_17[3].value = VAR_15[3];
 VAR_17[4].placeholder = "P"; VAR_17[4].value = VAR_18.buf;
 VAR_17[5].placeholder = ((void*)0); VAR_17[5].value = ((void*)0);

 if (VAR_4->cmdline == ((void*)0))
  FUNC_4("custom merge driver %s lacks command line.", VAR_4->name);

 VAR_5->ptr = ((void*)0);
 VAR_5->size = 0;
 FUNC_3(VAR_7, VAR_15[0], sizeof(VAR_15[0]));
 FUNC_3(VAR_9, VAR_15[1], sizeof(VAR_15[1]));
 FUNC_3(VAR_11, VAR_15[2], sizeof(VAR_15[2]));
 FUNC_14(VAR_15[3], sizeof(VAR_15[3]), "%d", VAR_14);

 FUNC_10(&VAR_16, VAR_4->cmdline, VAR_3, &VAR_17);

 VAR_19[0] = VAR_16.buf;
 VAR_20 = FUNC_8(VAR_19, VAR_1);
 VAR_21 = FUNC_6(VAR_15[1], VAR_0);
 if (VAR_21 < 0)
  goto bad;
 if (FUNC_5(VAR_21, &VAR_23))
  goto close_bad;
 VAR_5->size = VAR_23.st_size;
 VAR_5->ptr = FUNC_13(VAR_5->size);
 if (FUNC_7(VAR_21, VAR_5->ptr, VAR_5->size) != VAR_5->size) {
  FUNC_0(VAR_5->ptr);
  VAR_5->size = 0;
 }
 close_bad:
 FUNC_2(VAR_21);
 bad:
 for (VAR_22 = 0; VAR_22 < 3; VAR_22++)
  FUNC_12(VAR_15[VAR_22]);
 FUNC_11(&VAR_16);
 FUNC_11(&VAR_18);
 return VAR_20;
}
