
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkfront_info {scalar_t__ feature_flush; scalar_t__ feature_fua; } ;



__attribute__((used)) static const char *FUNC_0(struct blkfront_info *VAR_0)
{
 if (VAR_0->feature_flush && VAR_0->feature_fua)
  return "barrier: enabled;";
 else if (VAR_0->feature_flush)
  return "flush diskcache: enabled;";
 else
  return "barrier or flush: disabled;";
}
