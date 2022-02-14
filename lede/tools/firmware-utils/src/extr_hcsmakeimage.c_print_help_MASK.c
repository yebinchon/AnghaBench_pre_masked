
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1 ( const char* VAR_0 )
{
 FUNC_0 ( "Firmware image packer and calculator for broadcom-based modems.\n" );
 FUNC_0 ( "Part of bcm-utils package.\n" );
 FUNC_0 ( "(c) 2009 Necromant (http://necromant.ath.cx). Thanks to Luke-jr for his initial work.\n" );
 FUNC_0 ( "usage: %s [options]\n", VAR_0 );
 FUNC_0 ( "Valid options are:\n" );
 FUNC_0 ( "--magic_bytes=value \t- specify magic bytes at the beginning of the image. default - 3349\n" );
 FUNC_0 ( "\t\t\t these can be sa2100 (for DPC2100 modem),\n\t\t\t sa3349 (haxorware guys use this one for some reason),\n\t\t\t or a custom hex value e.g. 0xFFFF\n" );
 FUNC_0 ( "--compress \t\t - Make use of LZMA (weird!) compression (Doesn't work yet).\n" );
 FUNC_0 ( "--rev_maj=value\t\t - major revision number. default 0\n" );
 FUNC_0 ( "--rev_min=value\t\t - minor revision number default 0\n" );
 FUNC_0 ( "--filename=value\t - use this filename in header instead of default (input filename)\n" );
 FUNC_0 ( "--ldaddress=value\t - hex value of the target load address. defaults to 0x80010000\n" );
 FUNC_0 ( "--input_file=value\t - What file are we packing?\n" );
 FUNC_0 ( "--output_file=value\t - What file shall we write? (default: image.bin)\n" );



 FUNC_0 ( "\n" );
}
