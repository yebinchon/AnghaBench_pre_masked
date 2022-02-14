
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapping_list {int dummy; } ;
struct mapping {scalar_t__ m_char; scalar_t__ m_length; TYPE_1__* m_glyph; } ;
struct TYPE_2__ {scalar_t__ g_index; } ;


 struct mapping* FUNC_0 (struct mapping_list*) ;
 struct mapping* FUNC_1 (struct mapping*,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 struct mapping_list* VAR_2 ;

__attribute__((used)) static void
FUNC_2(unsigned int VAR_3)
{
 struct mapping_list *VAR_4 = &VAR_2[VAR_3];
 struct mapping *VAR_5, *VAR_6, *VAR_7;

 VAR_6 = VAR_7 = FUNC_0(VAR_4);
 for (VAR_6 = VAR_7 = FUNC_0(VAR_4); VAR_6 != ((void*)0); VAR_6 = VAR_5) {
  VAR_5 = FUNC_1(VAR_6, VAR_0);
  if (VAR_5 != ((void*)0) && VAR_5->m_char == VAR_6->m_char + 1 &&
      VAR_5->m_glyph->g_index == VAR_6->m_glyph->g_index + 1)
   continue;
  VAR_7->m_length = VAR_6->m_char - VAR_7->m_char + 1;
  VAR_7 = VAR_6 = VAR_5;
  VAR_1[VAR_3]++;
 }
}
