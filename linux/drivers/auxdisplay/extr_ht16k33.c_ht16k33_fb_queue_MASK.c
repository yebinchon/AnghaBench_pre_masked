
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ht16k33_fbdev {int refresh_rate; int work; } ;
struct ht16k33_priv {struct ht16k33_fbdev fbdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ht16k33_priv *VAR_1)
{
 struct ht16k33_fbdev *VAR_2 = &VAR_1->fbdev;

 FUNC_1(&VAR_2->work,
         FUNC_0(VAR_0 / VAR_2->refresh_rate));
}
