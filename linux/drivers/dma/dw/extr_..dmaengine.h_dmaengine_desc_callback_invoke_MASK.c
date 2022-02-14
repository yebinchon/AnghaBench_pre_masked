
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmaengine_result {int residue; int result; } ;
struct dmaengine_desc_callback {int callback_param; int (* callback ) (int ) ;int (* callback_result ) (int ,struct dmaengine_result const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dmaengine_result const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(struct dmaengine_desc_callback *VAR_1,
          const struct dmaengine_result *VAR_2)
{
 struct dmaengine_result VAR_3 = {
  .result = VAR_0,
  .residue = 0
 };

 if (VAR_1->callback_result) {
  if (!VAR_2)
   VAR_2 = &VAR_3;
  VAR_1->callback_result(VAR_1->callback_param, VAR_2);
 } else if (VAR_1->callback) {
  VAR_1->callback(VAR_1->callback_param);
 }
}
