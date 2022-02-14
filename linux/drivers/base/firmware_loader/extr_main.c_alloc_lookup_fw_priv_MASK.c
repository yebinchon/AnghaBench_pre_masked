
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_priv {int list; int ref; } ;
struct firmware_cache {int lock; int head; } ;
typedef enum fw_opt { ____Placeholder_fw_opt } fw_opt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct fw_priv* FUNC_1 (char const*,struct firmware_cache*,void*,size_t) ;
 struct fw_priv* FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(const char *VAR_2,
    struct firmware_cache *VAR_3,
    struct fw_priv **VAR_4, void *VAR_5,
    size_t VAR_6, enum fw_opt VAR_7)
{
 struct fw_priv *VAR_8;

 FUNC_6(&VAR_3->lock);
 if (!(VAR_7 & VAR_1)) {
  VAR_8 = FUNC_2(VAR_2);
  if (VAR_8) {
   FUNC_3(&VAR_8->ref);
   FUNC_7(&VAR_3->lock);
   *VAR_4 = VAR_8;
   FUNC_5("batched request - sharing the same struct fw_priv and lookup for multiple requests\n");
   return 1;
  }
 }

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6);
 if (VAR_8) {
  FUNC_0(&VAR_8->list);
  if (!(VAR_7 & VAR_1))
   FUNC_4(&VAR_8->list, &VAR_3->head);
 }
 FUNC_7(&VAR_3->lock);

 *VAR_4 = VAR_8;

 return VAR_8 ? 0 : -VAR_0;
}
