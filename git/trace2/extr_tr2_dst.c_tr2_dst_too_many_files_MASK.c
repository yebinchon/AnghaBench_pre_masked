
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr2_dst {int too_many_files; int fd; } ;
struct strbuf {int len; int * buf; } ;
struct stat {int dummy; } ;
typedef int DIR ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,struct stat*) ;
 int FUNC_7 (struct strbuf*,struct strbuf*) ;
 int FUNC_8 (struct strbuf*,char) ;
 int FUNC_9 (struct strbuf*,char const*) ;
 int FUNC_10 (struct strbuf*) ;
 char* FUNC_11 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(struct tr2_dst *VAR_7, const char *VAR_8)
{
 int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 const char *VAR_12;
 DIR *VAR_13;
 struct strbuf VAR_14 = VAR_4, VAR_15 = VAR_4;
 struct stat VAR_16;


 VAR_12 = FUNC_11(VAR_5);
 if (VAR_12 && *VAR_12 && ((VAR_10 = FUNC_0(VAR_12)) >= 0))
  VAR_6 = VAR_10;

 if (!VAR_6) {
  VAR_11 = 0;
  goto cleanup;
 }

 FUNC_9(&VAR_14, VAR_8);
 if (!FUNC_2(VAR_14.buf[VAR_14.len - 1])) {
  FUNC_8(&VAR_14, '/');
 }


 FUNC_7(&VAR_15, &VAR_14);
 FUNC_9(&VAR_15, VAR_0);
 if (!FUNC_6(VAR_15.buf, &VAR_16)) {
  VAR_11 = 1;
  goto cleanup;
 }


 VAR_13 = FUNC_4(VAR_14.buf);
 while (VAR_9 < VAR_6 && VAR_13 && FUNC_5(VAR_13))
  VAR_9++;
 if (VAR_13)
  FUNC_1(VAR_13);

 if (VAR_9 >= VAR_6) {
  VAR_7->too_many_files = 1;
  VAR_7->fd = FUNC_3(VAR_15.buf, VAR_3 | VAR_1 | VAR_2, 0666);
  VAR_11 = -1;
  goto cleanup;
 }

cleanup:
 FUNC_10(&VAR_14);
 FUNC_10(&VAR_15);
 return VAR_11;
}
