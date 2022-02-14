
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {char** color_palette; int use_color; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(int VAR_2, struct wt_status *VAR_3)
{
 const char *VAR_4 = "";
 if (FUNC_1(VAR_3->use_color))
  VAR_4 = VAR_3->color_palette[VAR_2];
 if (VAR_2 == VAR_1 && FUNC_0(VAR_4))
  VAR_4 = VAR_3->color_palette[VAR_0];
 return VAR_4;
}
