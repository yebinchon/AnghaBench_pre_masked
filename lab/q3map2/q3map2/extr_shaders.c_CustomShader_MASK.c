
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* shaderText; scalar_t__ implicitMap; char* implicitImagePath; char* shader; scalar_t__ custom; } ;
typedef TYPE_1__ shaderInfo_t ;
typedef int byte ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,size_t,unsigned char*) ;
 TYPE_1__* FUNC_2 (char*) ;
 char* VAR_4 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__ VAR_5 ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,char*,char*,...) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 size_t FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;

shaderInfo_t *FUNC_10( shaderInfo_t *VAR_6, char *VAR_7, char *VAR_8 ){
 shaderInfo_t *VAR_9;
 char VAR_10[ VAR_3 ];
 char *VAR_11;
 int VAR_12;
 byte VAR_13[ 16 ];
 char *VAR_14, VAR_15[ 8192 ], VAR_16[ 8192 ];



 if ( VAR_6 == ((void*)0) ) {
  return FUNC_2( "default" );
 }


 VAR_14 = VAR_6->shaderText;


 if ( VAR_6->implicitMap == VAR_2 ) {
  VAR_14 = VAR_15;
  FUNC_5( VAR_15, "\n"
        "{ // Q3Map2 defaulted (implicitMap)\n"
        "\t{\n"
        "\t\tmap $lightmap\n"
        "\t\trgbGen identity\n"
        "\t}\n"
        "\tq3map_styleMarker\n"
        "\t{\n"
        "\t\tmap %s\n"
        "\t\tblendFunc GL_DST_COLOR GL_ZERO\n"
        "\t\trgbGen identity\n"
        "\t}\n"
        "}\n",
     VAR_6->implicitImagePath );
 }


 else if ( VAR_6->implicitMap == VAR_1 ) {
  VAR_14 = VAR_15;
  FUNC_5( VAR_15, "\n"
        "{ // Q3Map2 defaulted (implicitMask)\n"
        "\tcull none\n"
        "\t{\n"
        "\t\tmap %s\n"
        "\t\talphaFunc GE128\n"
        "\t\tdepthWrite\n"
        "\t}\n"
        "\t{\n"
        "\t\tmap $lightmap\n"
        "\t\trgbGen identity\n"
        "\t\tdepthFunc equal\n"
        "\t}\n"
        "\tq3map_styleMarker\n"
        "\t{\n"
        "\t\tmap %s\n"
        "\t\tblendFunc GL_DST_COLOR GL_ZERO\n"
        "\t\tdepthFunc equal\n"
        "\t\trgbGen identity\n"
        "\t}\n"
        "}\n",
     VAR_6->implicitImagePath,
     VAR_6->implicitImagePath );
 }


 else if ( VAR_6->implicitMap == VAR_0 ) {
  VAR_14 = VAR_15;
  FUNC_5( VAR_15, "\n"
        "{ // Q3Map2 defaulted (implicitBlend)\n"
        "\tcull none\n"
        "\t{\n"
        "\t\tmap %s\n"
        "\t\tblendFunc GL_SRC_ALPHA GL_ONE_MINUS_SRC_ALPHA\n"
        "\t}\n"
        "\t{\n"
        "\t\tmap $lightmap\n"
        "\t\trgbGen identity\n"
        "\t\tblendFunc GL_DST_COLOR GL_ZERO\n"
        "\t}\n"
        "\tq3map_styleMarker\n"
        "}\n",
     VAR_6->implicitImagePath );
 }


 else if ( VAR_14 == ((void*)0) ) {
  VAR_14 = VAR_15;
  FUNC_5( VAR_15, "\n"
        "{ // Q3Map2 defaulted\n"
        "\t{\n"
        "\t\tmap $lightmap\n"
        "\t\trgbGen identity\n"
        "\t}\n"
        "\tq3map_styleMarker\n"
        "\t{\n"
        "\t\tmap %s.tga\n"
        "\t\tblendFunc GL_DST_COLOR GL_ZERO\n"
        "\t\trgbGen identity\n"
        "\t}\n"
        "}\n",
     VAR_6->shader );
 }


 if ( ( FUNC_8( VAR_4 ) + 1 + 32 ) > VAR_3 ) {
  FUNC_0( "Custom shader name length (%d) exceeded. Shorten your map name.\n", VAR_3 );
 }


 VAR_11 = FUNC_9( VAR_14, VAR_7 );
 if ( VAR_11 == ((void*)0) ) {

  return VAR_6;
 }
 else
 {

  VAR_12 = VAR_11 - VAR_14;
  FUNC_7( VAR_16, VAR_14 );
  VAR_16[ VAR_12 ] = '\0';
  FUNC_6( VAR_16, VAR_8 );
  FUNC_6( VAR_16, &VAR_14[ VAR_12 + FUNC_8( VAR_7 ) ] );
 }


 FUNC_1( VAR_16, FUNC_8( VAR_16 ), (unsigned char *) &VAR_13 );


 FUNC_5( VAR_10, "%s/%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X", VAR_4,
    VAR_13[ 0 ], VAR_13[ 1 ], VAR_13[ 2 ], VAR_13[ 3 ], VAR_13[ 4 ], VAR_13[ 5 ], VAR_13[ 6 ], VAR_13[ 7 ],
    VAR_13[ 8 ], VAR_13[ 9 ], VAR_13[ 10 ], VAR_13[ 11 ], VAR_13[ 12 ], VAR_13[ 13 ], VAR_13[ 14 ], VAR_13[ 15 ] );


 VAR_9 = FUNC_2( VAR_10 );


 if ( VAR_9->custom ) {
  return VAR_9;
 }


 FUNC_3( VAR_9, VAR_6, sizeof( shaderInfo_t ) );
 FUNC_7( VAR_9->shader, VAR_10 );
 VAR_9->custom = VAR_5;


 VAR_9->shaderText = FUNC_4( FUNC_8( VAR_16 ) + 1 );
 FUNC_7( VAR_9->shaderText, VAR_16 );


 return VAR_9;
}
