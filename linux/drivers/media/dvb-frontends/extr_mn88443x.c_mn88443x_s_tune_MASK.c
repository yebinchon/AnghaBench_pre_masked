
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct mn88443x_priv {struct regmap* regmap_s; } ;
struct dtv_frontend_properties {int stream_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regmap*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mn88443x_priv *VAR_3,
       struct dtv_frontend_properties *VAR_4)
{
 struct regmap *VAR_5 = VAR_3->regmap_s;

 FUNC_0(VAR_5, VAR_1, VAR_4->stream_id >> 8);
 FUNC_0(VAR_5, VAR_0, VAR_4->stream_id);
 FUNC_0(VAR_5, VAR_2, 0);
}
