
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int uint64_t ;
struct tr2tls_thread_ctx {scalar_t__ nr_open_regions; } ;
struct repository {int dummy; } ;
struct json_writer {int json; } ;


 struct json_writer VAR_0 ;
 int FUNC_0 (char const*,char const*,int,struct repository const*,struct json_writer*) ;
 int FUNC_1 (struct json_writer*) ;
 int FUNC_2 (struct json_writer*,int ) ;
 int FUNC_3 (struct json_writer*,char*,scalar_t__) ;
 int FUNC_4 (struct json_writer*,char*,char const*) ;
 int FUNC_5 (struct json_writer*) ;
 int FUNC_6 (struct json_writer*,char*,char const*,int ) ;
 int FUNC_7 (int *,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tr2tls_thread_ctx* FUNC_8 () ;

__attribute__((used)) static void FUNC_9(const char *VAR_3, int VAR_4,
      uint64_t VAR_5,
      const char *VAR_6,
      const char *VAR_7,
      const struct repository *VAR_8,
      const char *VAR_9, va_list VAR_10)
{
 const char *VAR_11 = "region_enter";
 struct tr2tls_thread_ctx *VAR_12 = FUNC_8();
 if (VAR_12->nr_open_regions <= VAR_2) {
  struct json_writer VAR_13 = VAR_0;

  FUNC_2(&VAR_13, 0);
  FUNC_0(VAR_11, VAR_3, VAR_4, VAR_8, &VAR_13);
  FUNC_3(&VAR_13, "nesting", VAR_12->nr_open_regions);
  if (VAR_6)
   FUNC_4(&VAR_13, "category", VAR_6);
  if (VAR_7)
   FUNC_4(&VAR_13, "label", VAR_7);
  FUNC_6(&VAR_13, "msg", VAR_9, VAR_10);
  FUNC_1(&VAR_13);

  FUNC_7(&VAR_1, &VAR_13.json);
  FUNC_5(&VAR_13);
 }
}
