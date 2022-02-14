
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cellRendererButtonClass ;
struct TYPE_5__ {int activate; int render; int get_aligned_area; int get_preferred_height; int get_preferred_height_for_width; int get_preferred_width; int get_request_mode; } ;
struct TYPE_4__ {int get_property; int set_property; int finalize; int dispose; } ;


 TYPE_3__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (TYPE_1__*,int,int *) ;
 int FUNC_4 (char*,char*,char*,char*,int) ;
 int FUNC_5 (char*,int ,int ,int ,int *,int *,int *,int ,int,int ) ;
 int * VAR_18 ;

__attribute__((used)) static void FUNC_6(cellRendererButtonClass *VAR_19)
{
 FUNC_1(VAR_19)->dispose = VAR_7;
 FUNC_1(VAR_19)->finalize = VAR_8;
 FUNC_1(VAR_19)->set_property = VAR_16;
 FUNC_1(VAR_19)->get_property = VAR_13;
 FUNC_0(VAR_19)->get_request_mode = VAR_14;
 FUNC_0(VAR_19)->get_preferred_width = VAR_12;
 FUNC_0(VAR_19)->get_preferred_height_for_width = VAR_11;
 FUNC_0(VAR_19)->get_preferred_height = VAR_10;

 FUNC_0(VAR_19)->get_aligned_area = VAR_9;

 FUNC_0(VAR_19)->render = VAR_15;
 FUNC_0(VAR_19)->activate = VAR_6;


 VAR_18[1] = FUNC_4("text",
  "Text",
  "Button text",
  "",
  VAR_1 | VAR_0 | VAR_2);
 FUNC_3(FUNC_1(VAR_19), 2, VAR_18);

 VAR_17 = FUNC_5("clicked",
  FUNC_2(VAR_19),
  VAR_3,
  0,
  ((void*)0), ((void*)0), ((void*)0),
  VAR_4,
  1, VAR_5);
}
