
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_softc {scalar_t__ codecs_no; struct hda_codec_inst** codecs; } ;
struct hda_codec_inst {scalar_t__ cad; struct hda_codec_class* codec; int * hops; struct hda_softc* hda; } ;
struct hda_codec_class {int (* init ) (struct hda_codec_inst*,char const*,char const*,char const*) ;} ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 struct hda_codec_inst* FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (struct hda_codec_inst*,char const*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_3(struct hda_softc *VAR_2, struct hda_codec_class *VAR_3,
    const char *VAR_4, const char *VAR_5, const char *VAR_6)
{
 struct hda_codec_inst *VAR_7 = ((void*)0);

 if (VAR_2->codecs_no >= VAR_0)
  return (-1);

 VAR_7 = FUNC_1(1, sizeof(struct hda_codec_inst));
 if (!VAR_7)
  return (-1);

 VAR_7->hda = VAR_2;
 VAR_7->hops = &VAR_1;
 VAR_7->cad = VAR_2->codecs_no;
 VAR_7->codec = VAR_3;

 VAR_2->codecs[VAR_2->codecs_no++] = VAR_7;

 if (!VAR_3->init) {
  FUNC_0("This codec does not implement the init function\n");
  return (-1);
 }

 return (VAR_3->init(VAR_7, VAR_4, VAR_5, VAR_6));
}
