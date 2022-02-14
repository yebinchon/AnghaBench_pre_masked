
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {void* headSkin; void* torsoSkin; void* legsSkin; } ;
typedef TYPE_1__ playerInfo_t ;
typedef int filename ;


 int FUNC_0 (char*,int,char*,char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (char*) ;

__attribute__((used)) static qboolean FUNC_2( playerInfo_t *VAR_3, const char *VAR_4, const char *VAR_5 ) {
 char VAR_6[VAR_0];

 FUNC_0( VAR_6, sizeof( VAR_6 ), "models/players/%s/lower_%s.skin", VAR_4, VAR_5 );
 VAR_3->legsSkin = FUNC_1( VAR_6 );

 FUNC_0( VAR_6, sizeof( VAR_6 ), "models/players/%s/upper_%s.skin", VAR_4, VAR_5 );
 VAR_3->torsoSkin = FUNC_1( VAR_6 );

 FUNC_0( VAR_6, sizeof( VAR_6 ), "models/players/%s/head_%s.skin", VAR_4, VAR_5 );
 VAR_3->headSkin = FUNC_1( VAR_6 );

 if ( !VAR_3->legsSkin || !VAR_3->torsoSkin || !VAR_3->headSkin ) {
  return VAR_1;
 }

 return VAR_2;
}
