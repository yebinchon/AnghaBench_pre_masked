
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysc_revision_quirk {scalar_t__ base; scalar_t__ rev_offset; scalar_t__ sysc_offset; scalar_t__ syss_offset; int revision; int revision_mask; int quirks; int name; } ;
struct TYPE_2__ {int quirks; } ;
struct sysc {scalar_t__ module_pa; scalar_t__* offsets; int revision; TYPE_1__ cfg; int name; } ;


 int FUNC_0 (struct sysc_revision_quirk*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct sysc_revision_quirk* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct sysc *VAR_4)
{
 const struct sysc_revision_quirk *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  VAR_5 = &VAR_3[VAR_6];

  if (VAR_5->base && VAR_5->base != VAR_4->module_pa)
   continue;

  if (VAR_5->rev_offset >= 0 &&
      VAR_5->rev_offset != VAR_4->offsets[VAR_0])
   continue;

  if (VAR_5->sysc_offset >= 0 &&
      VAR_5->sysc_offset != VAR_4->offsets[VAR_1])
   continue;

  if (VAR_5->syss_offset >= 0 &&
      VAR_5->syss_offset != VAR_4->offsets[VAR_2])
   continue;

  if (VAR_5->revision == VAR_4->revision ||
      (VAR_5->revision & VAR_5->revision_mask) ==
      (VAR_4->revision & VAR_5->revision_mask)) {
   VAR_4->name = VAR_5->name;
   VAR_4->cfg.quirks |= VAR_5->quirks;
  }
 }
}
