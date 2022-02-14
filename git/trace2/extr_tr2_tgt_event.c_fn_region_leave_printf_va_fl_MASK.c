
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef scalar_t__ uint64_t ;
struct tr2tls_thread_ctx {scalar_t__ nr_open_regions; } ;
struct repository {int dummy; } ;
struct json_writer {int json; } ;


 struct json_writer VAR_0 ;
 int FUNC_0 (char const*,char const*,int,struct repository const*,struct json_writer*) ;
 int FUNC_1 (struct json_writer*) ;
 int FUNC_2 (struct json_writer*,int ) ;
 int FUNC_3 (struct json_writer*,char*,int,double) ;
 int FUNC_4 (struct json_writer*,char*,scalar_t__) ;
 int FUNC_5 (struct json_writer*,char*,char const*) ;
 int FUNC_6 (struct json_writer*) ;
 int FUNC_7 (struct json_writer*,char*,char const*,int ) ;
 int FUNC_8 (int *,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tr2tls_thread_ctx* FUNC_9 () ;

__attribute__((used)) static void FUNC_10(
 const char *VAR_3, int VAR_4, uint64_t VAR_5,
 uint64_t VAR_6, const char *VAR_7, const char *VAR_8,
 const struct repository *VAR_9, const char *VAR_10, va_list VAR_11)
{
 const char *VAR_12 = "region_leave";
 struct tr2tls_thread_ctx *VAR_13 = FUNC_9();
 if (VAR_13->nr_open_regions <= VAR_2) {
  struct json_writer VAR_14 = VAR_0;
  double VAR_15 = (double)VAR_6 / 1000000.0;

  FUNC_2(&VAR_14, 0);
  FUNC_0(VAR_12, VAR_3, VAR_4, VAR_9, &VAR_14);
  FUNC_3(&VAR_14, "t_rel", 6, VAR_15);
  FUNC_4(&VAR_14, "nesting", VAR_13->nr_open_regions);
  if (VAR_7)
   FUNC_5(&VAR_14, "category", VAR_7);
  if (VAR_8)
   FUNC_5(&VAR_14, "label", VAR_8);
  FUNC_7(&VAR_14, "msg", VAR_10, VAR_11);
  FUNC_1(&VAR_14);

  FUNC_8(&VAR_1, &VAR_14.json);
  FUNC_6(&VAR_14);
 }
}
